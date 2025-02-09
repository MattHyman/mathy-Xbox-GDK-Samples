  ![](./media/image1.png)

#   HlslCompile 샘플

*이 샘플은 Microsoft 게임 개발 키트 미리 보기(2019년 11월)와
호환됩니다.*

# 설명

이 샘플은 다양한 방법으로 동일한 픽셀 셰이더를 컴파일하여 PC 쪽 자산
빌드에 대한 다양한 옵션을 보여 줍니다. 셰이더 컴파일러는 현재 개발
중이며, 기능이 바뀌면 샘플도 업데이트됩니다.

이 샘플은 다음과 같은 두 가지 컴파일러 인터페이스를 사용하여 셰이더를
빌드합니다.

-   Dxc.exe -- 새 셰이더 컴파일러 프런트 엔드의 명령줄 인터페이스

-   DxCompiler_x\[s\].dll 새 셰이더 컴파일러 프런트 엔드의 호출 가능
    인터페이스

XboxOne 및 Scarlett용 exe 및 dll에 대한 별도 복사본이 있습니다. (dll의
Scarlett 사본은 DxCompiler_xs.dll입니다.)

셰이더 기호는 C++ 기호가 Visual Studio 및 기타 도구에 대한 컨텍스트를
제공하는 것과 같은 방식으로 PIX에 대한 중요한 정보를 제공합니다. 셰이더
컴파일러 인터페이스는 기호 저장을 위한 다음과 같은 몇 가지 옵션을
지원합니다.

-   이진에 포함 - 이 방법은 가장 간단하지만 런타임 메모리 사용 측면에서
    일반적으로 비용이 많이 듭니다. 포함된 기호는 새 셰이더 컴파일러
    프런트 엔드에는 사용되지 않습니다.

-   수동으로 선택한 파일 이름에 연결 - 예를 들어 호출자는 소스 파일
    이름의 인식할 수 있는 변형으로 이름을 선택할 수 있습니다.

-   자동으로 선택한 파일 이름에 연결 -- 컴파일된 셰이더의 해시에 따라
    이름이 선택됩니다. 이 방법은 PIX에서 힌트 없이 동일한 셰이더 해시를
    계산할 수 있기 때문에 권장되는 방법입니다.

# 샘플 빌드

Xbox One 개발 키트를 사용하는 경우 활성 솔루션 플랫폼을
Gaming.Xbox.XboxOne.x64로 설정하세요. Scarlett devkit를 사용하는 경우
활성 솔루션 플랫폼을 Gaming.Xbox.Scarlett.x64로 설정하세요.

*자세한 내용은 GDK 문서에서* 샘플 실행하기*를 참조하세요.*

# 샘플 사용

이 샘플은 비대화형입니다. 아래의 화면 이미지에 나오는 각 행에는 삼각형이
포함되어 있습니다. 각 삼각형은 동일한 픽셀 셰이더의 복사본을 사용하여
렌더링되고 각 사본은 서로 다른 방식으로 컴파일됩니다. 각 픽셀 셰이더
이진 파일의 크기는 녹청색으로 표시됩니다(스크린샷의 숫자는 오래된 것일
수 있음). 각 줄 텍스트의 나머지 부분에서는 셰이더가 컴파일된 방법과
기호를 저장하는 방법을 설명합니다.

기호가 제대로 생성되었는지 확인하려면 샘플의 PIX GPU 캡처를 작성하고, 각
삼각형의 픽셀 셰이더에 대한 PIX에서 기호를 검색하는 것이 좋습니다.
PIX에서 적절한 기호를 자동으로 검색하는 경우도 있지만, 사용자 쪽의 수동
작업이 필요한 경우도 있습니다.

![](./media/image3.png)

# 알려진 문제

\[없음\]

# 업데이트 기록

초기 릴리스 2019년 4월

2019년 11월에 Scarlett용으로 업데이트됨

# 개인정보처리방침

샘플을 컴파일하고 실행할 때 샘플의 사용을 추적하는 데 도움이 되도록 샘플
실행 파일의 파일 이름이 Microsoft에 전송됩니다. 이 데이터 수집을
옵트아웃하려면 Main.cpp에서 \"샘플 사용 원격 분석\"이라고 레이블이
지정된 코드 블록을 제거할 수 있습니다.

Microsoft의 일반 개인정보취급방침에 대한 자세한 내용은 [Microsoft
개인정보처리방침](https://privacy.microsoft.com/en-us/privacystatement/)을
참조하세요.
