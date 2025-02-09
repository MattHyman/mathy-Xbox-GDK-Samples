//--------------------------------------------------------------------------------------
// EsramVisualizeEffect.h
//
// Advanced Technology Group (ATG)
// Copyright (C) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------

#pragma once

#include <GraphicsMemory.h>

namespace ATG
{
    class EsramVisualizeEffect
    {
    public:
        __declspec(align(16)) struct Constants
        {
            struct Texture
            {
                DirectX::XMUINT4 pageRanges[4];
                uint32_t pageRangeCount;
                uint32_t _padding;

                DirectX::XMFLOAT2 timeRange;
                DirectX::XMFLOAT4 color;
            };

            Texture textures[6];

            DirectX::XMUINT4 bounds;
            DirectX::XMFLOAT4 backgroundColor;

            float backgroundBlend;
            float foregroundBlend;
            uint32_t pageCount;
            float duration;

            float time;
            float flashRate;
            float factor;
            uint32_t selectedIndex;
        };

        explicit EsramVisualizeEffect(ID3D12Device* device);

        EsramVisualizeEffect(const EsramVisualizeEffect&) = delete;
        EsramVisualizeEffect& operator= (const EsramVisualizeEffect&) = delete;

        EsramVisualizeEffect(EsramVisualizeEffect&&) = default;
        EsramVisualizeEffect& operator= (EsramVisualizeEffect&&) = default;

        void Process(ID3D12GraphicsCommandList* commandList);

        void SetConstants(const Constants& constants);
        void SetTexture(D3D12_GPU_DESCRIPTOR_HANDLE handle);

    private:
        enum RootParameterIndex
        {
            ConstantBuffer,
            TextureUAV,
            RootParameterCount
        };

        Microsoft::WRL::ComPtr<ID3D12RootSignature>     m_rootSignature;
        Microsoft::WRL::ComPtr<ID3D12PipelineState>     m_pipelineState;

        Constants                                       m_constants;
        DirectX::GraphicsResource                       m_constantBuffer;
        D3D12_GPU_DESCRIPTOR_HANDLE                     m_texture = {};

        bool                                            m_dirtyFlag = false;

    private:
        static const wchar_t*                           s_shaderFilename;
        static const DirectX::XMINT2                    s_groupSize;
    };
}
