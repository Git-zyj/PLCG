#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned char var_3 = (unsigned char)44;
unsigned int var_6 = 3336958465U;
long long int var_8 = 5102596856920428093LL;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
unsigned long long int var_17 = 18228197080840996053ULL;
unsigned char var_18 = (unsigned char)143;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
