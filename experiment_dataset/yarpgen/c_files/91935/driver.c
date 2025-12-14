#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)22;
_Bool var_4 = (_Bool)0;
unsigned char var_13 = (unsigned char)228;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17940209222712778706ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3475;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
