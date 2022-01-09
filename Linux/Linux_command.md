# 进程查看
## ps
```shell
ps -ef|grep firefox
```

```shell
ps -f -p [PID] //查看该PID进程的信息
```

```shell
ps -u [用户名]] //查看该用户进程的信息
```

```shell
ps --help //帮助
```
## kill
```shell
kill -9 [进程] //强制关闭
```

## nvidia

```shell
watch -n 10 nvidia-smi
```