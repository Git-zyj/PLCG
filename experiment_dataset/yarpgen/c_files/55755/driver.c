#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2326003779707895728ULL;
int var_2 = 1010583079;
unsigned long long int var_6 = 3041060270935239885ULL;
unsigned short var_7 = (unsigned short)41440;
unsigned long long int var_8 = 16994834442987208430ULL;
unsigned short var_10 = (unsigned short)5427;
int zero = 0;
short var_14 = (short)-24486;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2670713919U;
unsigned short var_17 = (unsigned short)63072;
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
