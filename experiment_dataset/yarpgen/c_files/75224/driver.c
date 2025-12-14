#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20396;
unsigned short var_9 = (unsigned short)23096;
signed char var_13 = (signed char)60;
int var_14 = -1415365398;
int zero = 0;
int var_16 = 1395690064;
long long int var_17 = -2424961345701103656LL;
short var_18 = (short)-27273;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
