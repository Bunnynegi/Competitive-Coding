//python code but saving cpp
//https://www.hackerearth.com/challenge/college/aarambh2/algorithm/aa85d0b54976425a89cb9001ef927092/
def fast_power(base, power):


    result = 1
    while power > 0:

        if power % 2 == 0:

            power = power / 2
            base = base * base
        else:
            power = power - 1
            result = result * base
            power = power / 2
            base = base * base

    return result

n=input()
print fast_power(2, n)-1
