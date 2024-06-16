# Cap 2: Variables

En este cápitulo me centre mas en enseñar: ¿Que es una variable?, ¿Como se declara? y los tipos de variables.

## Compilar:

### main.c

Asi como en el cap 1, solo tienes que abrir la consola y escribir:
<pre><codes>
  echo Para linux:
  gcc -o main main.c
  echo para Windows
  gcc -o main.exe main.c
</codes></pre>

### ejemplo-de-const.c

Se compila igual que main:
<pre><codes>
  echo Para linux:
  gcc -o ejemplo-de-const ejemplo-de-const.c
  echo para Windows
  gcc -o ejemplo-de-const.exe ejemplo-de-const.c
</codes></pre>
<mark>Nota:</mark> No necesaria mente necesita el mismo nombre el archivo ejecutable que el código fuente: <codes>gcc -o main.exe ejemplo-de-const.c</codes>

### ejemplo-de-long.c

Lo mismo:
<pre><codes>
  echo Para linux:
  gcc -o ejemplo-de-long ejemplo-de-long.c
  echo para Windows
  gcc -o ejemplo-de-long.exe ejemplo-de-long.c
</codes></pre>

## Ejecutar

#### wINDOWS:
<pre>
  <codes>
    echo Ejecutamos main...
    main.exe
    echo Ejecutamos ejemplo de long ...
    ejemplo-de-long.exe
    echo Ejecutamos ejemplo de const ...
    ejemplo-de-const.exe
  </codes>
</pre>

#### LINUX:

Lo mismo, pero sin el <codes>.exe</codes>:
<pre>
  <codes>
    echo Ejecutamos main...
    ./main
    echo Ejecutamos ejemplo de long ...
    ./ejemplo-de-long
    echo Ejecutamos ejemplo de const ...
    ./ejemplo-de-const
  </codes>
</pre>
<mark>Nota:</mark> Se le coloca <codes>./</codes> para que la consola sepa que el programa está en la carpeta actual.
