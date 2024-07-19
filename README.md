## git-tools 简介

git-tools 是一个用于帮助我们快速切换到一个随机分支名的工具

### 安装

```shell
git clone https://github.com/Zzhenping/gt.git

将 /pwd/gt/bin/ 添加到环境变量
```


### 使用

windows
```shell
gt.exe
```

```shell
git version 2.39.2.windows.1
There are uncommitted changes in the repository.
Do you want to continue? (y/n): y
Switched to a new branch 'cuals1uj'
```


### 参数详解

```shell
gt.exe --help
```

```shell
Options:
 -c  --chore                   Create a chore prefix in minutes
 -d  --docs                    Create a docs prefix in minutes
 -f  --feat                    Create a feature prefix in minutes
 -fx  --fix                    Create a fix prefix in minutes
 -h  --help                    Display this help and exit
 -n  --name                    Switch to the specified branch
 -p  --perf                    Create a perf prefix in minutes
 -r  --refactor                Create a refactor prefix in minutes
 -s  --style                   Create a style prefix in minutes
 -t  --test                    Create a test prefix in minutes
 -v  --version                 Create a version prefix in minutes 
```


### git 前缀
`feat`: 新增/修改功能 (feature)。

`fix`: 修補 bug (bug fix)。

`docs`: 文件 (documentation)。

`style`: 格式 (不影響程式碼運行的變動 white-space, formatting, missing semi colons, etc)。

`refactor`: 重構 (既不是新增功能，也不是修補 bug 的程式碼變動)。

`perf`: 改善效能 (A code change that improves performance)。

`test`: 增加測試 (when adding missing tests)。

`chore`: 建構程序或輔助工具的變動 (maintain)。

`revert`: 撤銷回覆先前的 commit 例如：revert: type(scope): subject (回覆版本：xxxx)。

`version`: 更新版本信息。