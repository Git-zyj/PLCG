#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16585;
long long int var_2 = 5470529058655777174LL;
unsigned int var_11 = 2241502488U;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)239;
int zero = 0;
unsigned short var_15 = (unsigned short)32828;
signed char var_16 = (signed char)23;
long long int var_17 = 3565404431937209457LL;
signed char var_18 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
