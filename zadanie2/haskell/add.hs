
dodaj :: [Int] -> Int
dodaj [] = 0
dodaj (x:xs) = x + dodaj xs


main :: IO ()
main = do
  putStrLn "podaj liste"
  lista <- getLine
  print $ dodaj(read lista :: [Int])
