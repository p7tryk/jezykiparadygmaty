
rev :: [a] -> [a]
rev ret = foldr (\b c -> c ++ [b] ) [] ret


main :: IO ()
main = do
  putStrLn "podaj liste"
  lista <- getLine
  print $ rev(read lista :: [Int])
