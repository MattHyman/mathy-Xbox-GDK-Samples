  ![](./media/image1.png)

#   mDNS 桌面示例

此示例与 Microsoft 游戏开发工具包预览版（2019 年 11 月）兼容

# 说明

该示例演示了如何使用 mDNS
注册游戏服务并在本地网络中进行广播，以及演示了网络发现和解析。

# 构建示例

示例无需进行任何特定更改即可生成，并且无需进行任何修改即可运行。此示例不使用任何
Xbox Live 功能，并且不要求配置任何与沙盒或标题相关的内容。

有关详细信息，请参阅 GDK 文档中的"运行示例"。

# 使用示例

运行此示例时，可以执行以下操作：

-   注册 DNS：注册本地设备以进行网络发现

-   取消注册 DNS：取消注册先前创建的注册

-   开始浏览：开始对已注册设备（包括自身）进行持续的网络发现

-   停止浏览：取消之前开始的 DNS 浏览。

选择选项后，将在控制台中看到输出，显示请求的操作的结果。

选中"开始浏览"后，将会定期看到已成功解析的已发现服务的终结点。

此功能和示例可跨设备运行，例如，在运行与此示例等效的 Xbox 控制台时，Xbox
和电脑将能够发现彼此。

# 更新历史记录

2020 年 2 月 - 初始发布：2020 年 2 月

# 隐私声明

在编译和运行示例时，示例可执行文件的文件名将发送给
Microsoft，用于帮助跟踪示例使用情况。要选择退出此数据收集，你可以删除
Main.cpp 中标记为"示例使用遥测"的代码块。

有关 Microsoft 的一般隐私策略的详细信息，请参阅《[Microsoft
隐私声明](https://privacy.microsoft.com/en-us/privacystatement/)》。
