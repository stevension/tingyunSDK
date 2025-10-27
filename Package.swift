// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "tingyunAppSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        // 每个模块单独暴露，用户可选择添加
        .library(name: "tingyunApp", targets: ["tingyunApp"]),
        .library(name: "tingyunCPU", targets: ["tingyunCPU"]),
        .library(name: "tingyunGM", targets: ["tingyunGM"]),
        .library(name: "tingyunOOM", targets: ["tingyunOOM"]),
        .library(name: "tingyunReplay", targets: ["tingyunReplay"]),
        .library(name: "tingyunLog", targets: ["tingyunLog"])
    ],
    targets: [
        // 四个独立二进制模块
        .binaryTarget(
            name: "tingyunApp",
            path: "./Frameworks/tingyunApp.xcframework"
        ),
        .binaryTarget(
            name: "tingyunCPU",
            path: "./Frameworks/NBSCPUMonitorKit.xcframework"
        ),
        .binaryTarget(
            name: "tingyunGM",
            path: "./Frameworks/NBSGMKit.xcframework"
        ),
        .binaryTarget(
            name: "tingyunOOM",
            path: "./Frameworks/NBSOOM.xcframework"
        ),
        .binaryTarget(
            name: "tingyunReplay",
            path: "./Frameworks/NBSReplayKit.xcframework"
        ),
        .binaryTarget(
            name: "tingyunLog",
            path: "./Frameworks/TingyunLog.xcframework"
        ),
        .target(
            name: "tingyunAppSDK",
            dependencies: ["tingyunApp"],
            path: "Sources/tingyunSDK"
        )
    ]
)

