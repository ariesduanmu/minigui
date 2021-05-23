## Trial & Error In Startup Minigui

I tried to compile minigui 1.6.0 and 5.0 in my ubuntu20(x86_64) all failed.

Finally succeed in configure the development environment under Ubuntu16(x86) in virtual box with minigui 3.2

with help of [this](https://www.programmersought.com/article/192818300/) had a good begin

* `$ wget -qO - http://files.fmsoft.cn/ubuntu/key/fmsoft.gpg | sudo apt-key add -`
* `deb http://files.fmsoft.cn/ubuntu/ xenial restricted`
* `$ sudo apt update`
* `$ sudo apt install libminigui-ths-dev`

`$ sudo apt install libminigui-procs-dev` not work for me, so I tried to compile [minigui 3.2](https://github.com/VincentWei/build-minigui-3.2) myself

[steps](https://github.com/VincentWei/build-minigui-3.2#steps) int README is detail enough to lead you to success.
