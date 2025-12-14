#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8657;
_Bool var_2 = (_Bool)0;
unsigned long long int var_8 = 16743425123104368697ULL;
short var_9 = (short)-4176;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)39131;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1775269196;
unsigned short var_21 = (unsigned short)22585;
void init() {
}

void checksum() {
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
