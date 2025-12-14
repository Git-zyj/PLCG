#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 376144930U;
unsigned short var_4 = (unsigned short)49196;
long long int var_7 = 3858882951734267653LL;
_Bool var_9 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_18 = (short)31290;
short var_19 = (short)-18748;
short var_20 = (short)-3022;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
