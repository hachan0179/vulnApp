import bottle

PORT=8080
HOST='0.0.0.0'

app = bottle.Bottle()

@app.post('/upload')
def upload():
    try:
        upload = bottle.request.files.get('upload', '')
        save_path = get_save_path()
        upload.save(save_path)
        return 'Upload OK. FilePath: %s%s' % (save_path, upload.filename)
    except:
        return 'File Alredy exist'

def get_save_path():
    path_dir = "./chall"
    return path_dir

@app.get('/get/<filename>')
def send(filename):
    try:
        return bottle.static_file(f'./chall/{filename}',root='.',download=True)
    except:
        return f"{filename} is not exist"

if(__name__=='__main__'):
    app.run(port=PORT,host=HOST)