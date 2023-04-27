pertence _ [] = False
pertence n (x:xs) = if  n == x then True else pertence n (xs)

intercessao [] _ = []
intercessao (x:xs) ys = if pertence x ys then x:intercessao xs ys else intercessao xs ys

inverso [] = []
inverso (x:xs) = inverso xs ++[x] 

nPrimeiros n [] = []
nPrimeiros 0 (x:xs) = []
nPrimeiros n (x:xs) = x:nPrimeiros (n-1) xs 

nUltimos 0 xs = []
nUltimos n [] = []
nUltimos n (x:xs) =  inverso (nPrimeiros n (inverso (x:xs))) 

soma2 (x:xs) [] = []
soma2 [] (y:ys) = []
soma2 (x:xs) (y:ys) = x+y:soma2 xs ys 

pot 0 = 1
pot n = 2^n 

pot2' 0 = []
pot2' n = (pot n:(pot2' (n-1)))
pot2 n = inverso (pot2' n)

intercalacao (x:xs) []= (x:xs)
intercalacao [] (y:ys) = (y:ys)
intercalacao (x:xs) (y:ys) = if x < y then x:intercalacao xs (y:ys) else y:intercalacao (x:xs) ys 

menor (x:xs) = 

cu =[2*x|x <-[0..]]
impar x = mod x 2 == 1

remover _ [] = []
remover e (x:xs) = if e == x then remover e xs else x:remover e xs
removera e xs = [x|x <- xs, x == e]
