compile [hello.c](../src/hello.c) I noticed the parameter position in `gcc` matters

`gcc -o hello hello.c -L/usr/local/lib -lminigui_ths -ljpeg -lpng -lm -lfreetype -lpthread`

`pthread` needs go after `minigui_ths`
