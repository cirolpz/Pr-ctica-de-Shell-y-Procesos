#!/bin/bash

if [ -z "$1" ]; then
	echo "Error: se debe ejecutar con un parámetro al menos"
	exit 1
fi

nombre_dir="$1"

direccion="$HOME/$nombre_dir"

mkdir -p "$direccion"

archivo="$direccion/contenido_home.txt"

ls -la "$HOME" > "$archivo"

cat "$archivo"

echo
read -p "Presione Enter para terminar..."
