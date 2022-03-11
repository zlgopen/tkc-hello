# TKC 应用程序/动态库模板

gen.sh 是 bash 脚本，其中使用了 tr/sed 等命令，使用前请确保 bash 可用。

> Windows 下可以在 git-bash 下使用。

用法：

```
./gen.sh 名称 作者
```

> 名称为项目名，要求是合法的 C 语言变量名。

示例：

```
./gen.sh count_words 'Li XianJing <lixianjing@zlg.cn>'
```
