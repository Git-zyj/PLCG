#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38541;
long long int var_3 = 4659076621081690300LL;
unsigned short var_9 = (unsigned short)56510;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -210008707;
unsigned int var_19 = 1741853395U;
unsigned long long int var_20 = 6845431685919857113ULL;
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
