#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6917483581763392423ULL;
signed char var_6 = (signed char)-22;
unsigned short var_7 = (unsigned short)53217;
unsigned char var_8 = (unsigned char)74;
_Bool var_12 = (_Bool)0;
int var_13 = -77989077;
int zero = 0;
unsigned int var_16 = 1777863500U;
long long int var_17 = -4441746813794655578LL;
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
