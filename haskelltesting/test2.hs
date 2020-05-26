

readNumber :: [Int] -> IO [Int]
readNumber numbers = do
    line <- getLine
    case line of
        "exit" -> pure numbers
        _ -> case reads line of
            [(number, "")] -> readNumber (number : numbers)
            _ -> readNumber numbers

main :: IO ()
main = do
    numbers <- readNumber []
    print numbers
