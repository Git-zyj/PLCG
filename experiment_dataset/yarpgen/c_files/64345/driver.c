#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-17671;
unsigned short var_8 = (unsigned short)50057;
_Bool var_9 = (_Bool)0;
unsigned char var_14 = (unsigned char)36;
int zero = 0;
int var_18 = 775758643;
unsigned short var_19 = (unsigned short)20017;
void init() {
}

void checksum() {
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
