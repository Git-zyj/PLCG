#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54095;
short var_4 = (short)11448;
unsigned short var_8 = (unsigned short)55517;
unsigned int var_10 = 1656460742U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15701152644112420459ULL;
signed char var_15 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
