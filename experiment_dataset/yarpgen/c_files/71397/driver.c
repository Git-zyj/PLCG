#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)14285;
unsigned long long int var_9 = 5054334203236609665ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3237958213U;
unsigned int var_17 = 2028253959U;
unsigned char var_18 = (unsigned char)149;
void init() {
}

void checksum() {
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
