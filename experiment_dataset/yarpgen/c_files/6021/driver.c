#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
unsigned int var_15 = 4267654795U;
long long int var_16 = 5922540894211680439LL;
unsigned int var_17 = 52047091U;
unsigned short var_18 = (unsigned short)61143;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
