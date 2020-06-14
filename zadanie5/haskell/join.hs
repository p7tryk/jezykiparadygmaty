
join :: [[a]] -> [a]
join a = concat a 

main :: IO ()
main = do
  putStrLn "podaj liste list np [[1,2],[3,4]]"
  listy <- getLine
  print $ join(read listy :: [[Int]])
