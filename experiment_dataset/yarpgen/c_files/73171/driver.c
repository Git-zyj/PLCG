#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 18610398U;
_Bool var_3 = (_Bool)0;
long long int var_4 = -4265822842186739518LL;
int var_6 = 2006277341;
int var_13 = -1842599680;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)123;
unsigned char var_16 = (unsigned char)112;
int var_17 = 1321693251;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
