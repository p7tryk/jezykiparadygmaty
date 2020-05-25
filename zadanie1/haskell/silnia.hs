silnia i =
  if i<=0
  then 1
  else i*silnia(i-1)

silniaiteracyjnie i = product[1..i]  

main = do
  putStrLn "podaj liczbe z ktorej chcesz silnie policzyc"
  liczba <- getLine
  putStrLn "silnia rekurencyjnie"
  print $ silnia(read liczba :: Int)
  putStrLn "silnia iteracyjnie"
  print $ silniaiteracyjnie(read liczba :: Int)
  
