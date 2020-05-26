readInts :: String -> [Int]
readInts x = read x

main = do
  putStrLn "wpisz swoją liste np [1,2,3]"
  input <- getLine
  let list = read input :: [Int]
  print list
