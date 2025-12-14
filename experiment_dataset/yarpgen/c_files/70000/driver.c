#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned int var_1 = 651010043U;
unsigned long long int var_2 = 16746500578184797660ULL;
unsigned int var_3 = 1713406508U;
unsigned int var_5 = 2497226250U;
short var_8 = (short)-2223;
unsigned long long int var_10 = 5736027156807823379ULL;
int zero = 0;
signed char var_11 = (signed char)70;
long long int var_12 = -3391180968520879304LL;
unsigned int var_13 = 2833684641U;
unsigned short var_14 = (unsigned short)37538;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
