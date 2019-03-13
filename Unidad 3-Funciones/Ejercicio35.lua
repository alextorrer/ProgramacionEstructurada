--[[Autor: Amílcar A. Ramírez Patrón
Entradas: Número de celdas (n)
Proceso: Iterar por cada parte del número necesario del ejercicio y condicionar que sólo se imprima cuando se necesite,
imprimirlos con un espacio para la fácil legibilidad.
Salidas: El orden de los números pedidos.
]]
--[[ Funciones ]]--
function entradaNCeldas()
    n = io.read("*n")
end

function seleccionEspacioCelda()
    for i = 0, n - 1, 1 do
        for j = 0, n - 1, 1 do
            if i >= j then
                print(i, j, " ") --En Lua no deja imprimir seguido--
            end
            print ("    ")
        end
    end
end


--[[ Main ]]--
entradaNCeldas()
seleccionEspacioCelda()
--[[
QA: Realizo: Daniel
Entradas: Numero 5
Salidas: Diagonal superior de una matriz de 5 por 5
No tiene el formato requerido

]]
