# Funcion sin paramaetros
def print5Numbers() :
    for i in range(1, 6):
        print(i)

# Función con retorno
def ageVerification(age):
    return (age > 18)

print(ageVerification(21))

# Funcion con varios parametros
def getFullName(name, last_name):
    name = name.capitalize()
    last_name = last_name.capitalize()
    return f"{name} {last_name}"

print(getFullName('yeromi', 'zavala'))

# Funciones dentro de funciones
db = {
    'yeromi': {
        'full_name': 'Yeromi Zavala',
        'password': '123'
    },
    'william': {
        'full_name': 'William Zavala',
        'username': 'zavala',
        'password': '12345',
    },
}

def login(username, password):
    
    def getUser(username):
        return db.get(username)
    
    def validatePassword(user, password):
        return user.get('password') == password
    
    user = getUser(username)
    
    if user:
        if validatePassword(user, password):
            print(f'Bienvenido {user.get('full_name')}')
        else:
            print(f'Contraseña incorrecta.')
    else:
        print('Credenciales incorrectas.')
        
login('yeromi', '123')