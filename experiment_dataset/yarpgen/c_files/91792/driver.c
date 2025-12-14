#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1675354581;
unsigned char var_2 = (unsigned char)196;
unsigned short var_3 = (unsigned short)33490;
unsigned long long int var_6 = 13843927900789378409ULL;
short var_7 = (short)-31191;
int var_13 = 1337533546;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1284790804;
unsigned long long int var_16 = 6495268776685854111ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
