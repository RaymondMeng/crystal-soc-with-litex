## Command

>soc生成

```shell
python3 -m litex_boards.targets.sipeed_tang_primer_20k --build --with-video-terminal
```

>编译固件

```shell
litex_bare_metal_demo --build-path=build/sipeed_tang_primer_20k
```

>串口boot

```shell
 litex_term /dev/ttyUSB2 --kernel=demo.bin --speed=115200 
```