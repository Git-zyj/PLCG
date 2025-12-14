#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 763494209;
unsigned int var_4 = 2489786101U;
unsigned int var_6 = 870654657U;
unsigned int var_8 = 3937747712U;
long long int var_11 = -4123508313362885285LL;
unsigned long long int var_13 = 3077951913012539249ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5554605381295817990ULL;
int zero = 0;
long long int var_17 = -388444991581116824LL;
short var_18 = (short)4808;
signed char var_19 = (signed char)-109;
short var_20 = (short)-5035;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
