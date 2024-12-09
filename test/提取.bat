@echo off
tools\ffmpeg -i stego.mkv  -vcodec copy -an stego.avi
tools\xvid_decraw.exe -i stego.avi -mes 提取信息.txt -key 888
del stego.avi
echo 提取完成！
pause