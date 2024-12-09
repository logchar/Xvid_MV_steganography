@echo off
tools\ffmpeg -i cover.avi -filter:v yadif -pix_fmt yuv420p -s 352x288 cover.yuv 
tools\xvid_encraw.exe -w 352 -h 288 -csp i420 -i cover.yuv -o stego.xvid -mes 秘密信息.txt -key 888  -max_bframes 0 -bitrate 1000 -emrate 10
tools\ffmpeg.exe -i stego.xvid -vcodec copy stego.mkv
del stego.xvid
del cover.yuv
echo 嵌入完毕！
pause