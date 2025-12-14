#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)67;
short var_6 = (short)26354;
_Bool var_8 = (_Bool)0;
long long int var_13 = 7983748689020165339LL;
int zero = 0;
unsigned short var_14 = (unsigned short)20535;
int var_15 = -987304066;
void init() {
}

void checksum() {
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
