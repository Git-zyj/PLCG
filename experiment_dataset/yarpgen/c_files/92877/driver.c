#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11231279629496765816ULL;
unsigned char var_7 = (unsigned char)100;
short var_8 = (short)8454;
long long int var_9 = -2041391986245472495LL;
int var_12 = -1545804573;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3747146600585155113LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
