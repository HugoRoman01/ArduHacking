# README

---

En este apartado se detallara la instalacion y uso de la videoconsola para futuras pruebas. Se recomienda modificar los recursos extras empleados(github,raspberry,discord,mail…)

## Instalacion

Para empezar debemos preparar la consola para poder convertirla en un badusb, para ello debemos quemar el bootloader como se indica en el principio de la documentacion e instalar el personalizado, con esto habilitaremos que el Arduboy pueda enviar los payloads, a su vez activamos la sobreescritura de los archivos que se detalla anteriormente.

Una vez hecho esto podemos empezar a configurar nuestra interfaz, para el correcto funcionamiento de esta instalamos varias librerias:

- Arduboy  | Arduboy2 → Habilita funciones del Arduboy
- FingerPrintUSBHost → Esta libreria es la que nos facilita el valor del OS en el TWH al conectar el Arduboy al equipo
- Keyboard → Libreria muy importante que modifica los caracteres que se introducen con los payloads ya que el layout de teclado por defecto no nos sirve
- Arduino_keyboardlib → Libreria que conjunta con Keyboard, agrega la opcion de cargar layouts de teclados por defecto en cada archivo
- phukdlib_leonardo → Libreria modificada de la PHUK original, que nos proporciona funciones de pentesting para nuestro badusb, como abrir una terminar el MacOs.

Para terminar unicamente deberiamos subir el proyecto al Arduboy desde nuestro IDE.

## Funcionamiento

El metodo de empleo de la consola es muy simple, unicamente debemos conectarla a un equipo y empezara a funcionar

- Gestor de contraseñas:
    1. Dentro del equipo vamos al login que queramos usar
    2. En el Arduboy vamos al apartado de ‘Password Manager’
    3. Buscamos el perfil correspondiente y pulsamos el boton de inicio
    4. Se introducira la contraseña y se pulsara el enter automaticamente
    
- Detectar el SO:
    1. Simplemente debemos seleccionar la opcion de ‘Detect OS’ y nos dara el sistema operativo que haya en el sistema 
    
    <aside>
    💡 Si tenemos habilitado el modo automatico, la consola se reiniciara para mostrar los payloads correspondientes. Si esta en manual, volveremos al menu inicial
    
    </aside>
    

- BadUsb:
    1. Antes de emplear esta opcion es recomendable usar el modo de ‘detect OS’, si sabemos cual es el sistema principal o queremos ver todas las opciones podemos omitirlo
    2. Una vez entremos veremos que tenemos todos los sistemas para los que hay payloads desarrollados
    3. Buscaremos el SO que nos interese y seleccionamos el payload que queramos desplegar
    
    <aside>
    💡 Para varios de estos payloads necesitaremos un servidor o raspberry activos, por lo que si queremos usarlos debemos desplegarlo con antelacion y modificar las direcciones IP en el codigo.
    
    </aside>