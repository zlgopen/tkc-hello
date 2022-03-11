# tkc-hello

tkc 模板工程。

## 准备

1. 获取 tkc 并编译

```
git clone https://github.com/zlgopen/tkc.git
cd tkc; scons; cd -
```

> 注意：tkc 和 tkc-hello 并列放在同一级目录。

* 编译 PC 版本

```
scons
```

* 编译 LINUX FB 版本

```
scons LINUX_FB=true
```

> 完整编译选项请参考 [编译选项](https://github.com/zlgopen/tkc-widget-generator/blob/master/docs/build_options.md)

## 运行

```
./bin/demo
```

> 本文以 Linux/MacOS 为例，Windows 可能会微妙差异，请酌情处理。
