  ![](./media/image1.png)

#   衝突のサンプル

*このサンプルは、Microsoft ゲーム開発キットのプレビュー (2019 年 11 月)
に対応しています。*

# 

# 説明

このサンプルでは、Xbox One アプリのシンプルな境界ボリューム
テストにおける DirectXMath の衝突のタイプを示します。

![C:\\temp\\xbox_screenshot.png](./media/image3.png)

# サンプルのビルド

Project Scarlett を使用している場合は、Gaming.Xbox.Scarlett.x64
プラットフォーム構成をプロジェクトに追加する必要があります。この操作は、*構成マネージャー*を使って実行できます。\[アクティブなソリューション
プラットフォーム\] で \[構成マネージャー\] オプションを選択し、次に
\[新規作成\...\]
を選択します。\[新しいプラットフォームの入力または選択\] を
Gaming.Xbox.Scarlett.x64 に、\[設定のコピー元\]
をGaming.Xbox.XboxOne.x64 に設定します。次に \[OK\] を選択します。

*詳細については、GDK
ドキュメント*の「サンプルの実行」を*参照してください*。

# サンプルの使用

この例では、4種類の \"衝突\" グループを示します。

1.  アニメーションの球、軸並行ボックス、有向ボックスおよび三角形と衝突する静的境界付き**視錘台**。

2.  アニメーションの球、軸並行ボックス、有向ボックスおよび三角形と衝突する静的**軸並行ボックス**。

3.  アニメーションの球、軸並行ボックス、有向ボックスおよび三角形と衝突する静的**有向ボックス**。

4.  最適な球、軸並行ボックス、有向ボックスおよび三角形と衝突するアニメーションの**射線**。射線がヒットする場合は、マーカー
    ボックスがターゲット オブジェクトの交点に置かれます。

| 動作                         |  コントローラー                        |
|------------------------------|---------------------------------------|
| グループの周りの軌道カメラ X/Y を移動する |  右サムスティック |
| ビューをリセットする         |  右サムスティック ボタン               |
| 視 錘台グループにフォーカスする |  方向パッドの上 |
| 軸並行ボックス グループにフォーカスする |  方向パッドの右 |
| 有向ボックス グループにフォーカスする |  方向パッドの下 |
| 射線テスト グループにフォーカスする |  方向パッドの左 |
| ヘルプの切り替え             |  メニュー ボタン                       |
| 終了                         |  ビュー ボタン                         |

# 実装に関する注意事項

DirectXMath の境界ボリュームの種類の詳細については、「[Microsoft
Docs](https://docs.microsoft.com/en-us/windows/desktop/dxmath/directxmath-portal)」を参照してください。

-   **BoundingBox** クラス

-   **BoundingFrustum** クラス

-   **BoundingOrientedBox** クラス

-   **BoundingSphere** クラス

-   **TriangleTests** 名前空間

DirectXMath
の最新バージョンは、[GitHub](https://github.com/Microsoft/DirectXMath)で入手できます。

# 既知の問題

DirectXMath の **BoundingFrustum**
クラスは、左利き向けの表示システムでのみ動作します。

# 更新履歴

Xbox One XDK バージョンのサンプル、2016 年 5
月作成の初版。このサンプルの DirectX SDK
バージョンの最新版は、[GitHub](https://github.com/walbourn/directx-sdk-samples/tree/master/Collision)
に記載されています。

# プライバシーに関する声明

サンプルをコンパイルして実行すると、サンプルの使用状況を追跡するため、サンプル実行可能ファイルのファイル名が
Microsoft に送信されます。このデータ収集を無効にするには、「Sample Usage
Telemetry」とラベル付けされた Main.cpp
内のコードのブロックを削除します。

Microsoft のプライバシー方針の詳細については、「[Microsoft
プライバシーに関する声明](https://privacy.microsoft.com/en-us/privacystatement/)」を参照してください。
