FUNCTION isPrime(num)
    IF num <= 1
        RETURN false
    FOR i = 2 to sqrt(num)
        IF num % i == 0
            RETURN false
    RETURN true

START main
Read M, N
FOR i = M to N
    IF isPrime(i)
        Print i
END
