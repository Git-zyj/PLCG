#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11617;
unsigned short var_3 = (unsigned short)17240;
int var_5 = 197823828;
unsigned short var_13 = (unsigned short)9334;
short var_15 = (short)-18510;
unsigned int var_16 = 1450669645U;
int zero = 0;
short var_17 = (short)32058;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
