#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 654256009559260586LL;
short var_1 = (short)23587;
long long int var_3 = -3869101503007288524LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 397888736U;
int var_6 = 56862281;
short var_8 = (short)-1133;
unsigned char var_9 = (unsigned char)254;
int zero = 0;
unsigned int var_10 = 3419456691U;
long long int var_11 = 5300420206329200461LL;
unsigned short var_12 = (unsigned short)28899;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
