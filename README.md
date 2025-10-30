# TingyunSDK

Tingyun iOS SDK 模块化分发包  
支持按需集成主模块、CPU 监测、OOM、视频回放、日志回捞等功能。

---

## 🚀 支持模块

| 模块 | 名称 | 说明 | 是否必须 |
|------|------|------|------|
| tingyunApp | 主模块 | SDK 核心接口 | YES |
| tingyunCPU | CPU模块 | 采集 CPU 使用率、使用速率、CPU 异常| NO |
| tingyunOOM | OOM监控模块 | 采集 OOM 崩溃 | NO |
| tingyunReplay | 视频模块 | 支持视频回放 | NO |
| tingyunLog | 日志模块 | 支持日志回捞 | NO |

---

## 📦 安装方式

### 通过 Swift Package Manager

1. 在 Xcode 中：  
   `File > Add Packages...`  
   填入仓库地址：https://github.com/stevension/tingyunSDK.git

## [集成文档](https://wukongdoc.tingyun.com/ty-doc/en/docs/doc/RUM/sdk_deploy/iOS/deploy/)
