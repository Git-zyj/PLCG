#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 579490908U;
short var_5 = (short)24478;
short var_6 = (short)-24612;
signed char var_10 = (signed char)-2;
unsigned int var_12 = 2213605785U;
unsigned int var_15 = 612883561U;
long long int var_16 = -946832695387030305LL;
unsigned int var_18 = 1939077365U;
int zero = 0;
short var_19 = (short)734;
_Bool var_20 = (_Bool)1;
int var_21 = 1116192883;
long long int var_22 = 9004528679838607378LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
