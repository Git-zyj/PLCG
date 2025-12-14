#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_7 = (short)1939;
unsigned int var_9 = 2461056158U;
int zero = 0;
unsigned short var_15 = (unsigned short)49688;
unsigned char var_16 = (unsigned char)218;
long long int var_17 = 4770078428784487693LL;
long long int var_18 = -3323681684788728654LL;
long long int var_19 = -8653446814734930186LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
