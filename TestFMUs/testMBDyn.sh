cp testcode.mbdyn temp.mbdyn
address=$(pwd)
i=0
for file in $(find "$(pwd)" -name \*.fmu); do
	i=$((i+1))
	cp testcode.mbdyn temp.mbdyn
	sed -i -e "s%locationToFMU%$file%g" temp.mbdyn
	$(mbdyn -f temp.mbdyn > $i)
        if [ $? -ne 0 ]; then
                echo $file
                array+=$file
                echo "lololol"
#                break;
        fi
done

echo $array


