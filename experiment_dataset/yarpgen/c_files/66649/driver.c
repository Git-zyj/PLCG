#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4781571347751064135LL;
unsigned short var_4 = (unsigned short)21695;
signed char var_5 = (signed char)-35;
unsigned char var_6 = (unsigned char)209;
unsigned int var_7 = 3972812045U;
unsigned int var_9 = 707795445U;
unsigned short var_10 = (unsigned short)60889;
int zero = 0;
signed char var_11 = (signed char)124;
unsigned int var_12 = 1705014757U;
long long int var_13 = -7984695858191693613LL;
unsigned int var_14 = 1757946150U;
unsigned int var_15 = 2565243684U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
