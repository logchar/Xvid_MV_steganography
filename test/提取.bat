@echo off
tools\ffmpeg -i stego.mkv  -vcodec copy -an stego.avi
tools\xvid_decraw.exe -i stego.avi -mes ��ȡ��Ϣ.txt -key 888
del stego.avi
echo ��ȡ��ɣ�
pause