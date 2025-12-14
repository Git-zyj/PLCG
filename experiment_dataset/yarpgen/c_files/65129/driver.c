#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2302896492413309763ULL;
short var_6 = (short)-13779;
unsigned char var_7 = (unsigned char)100;
unsigned long long int var_10 = 3212804139707101251ULL;
int zero = 0;
unsigned int var_16 = 4276525547U;
unsigned char var_17 = (unsigned char)134;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3301270404970694515ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
