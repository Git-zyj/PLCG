#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15725857641341555978ULL;
unsigned char var_9 = (unsigned char)74;
unsigned long long int var_14 = 8811247163957440629ULL;
int zero = 0;
long long int var_20 = -7717700683299813322LL;
unsigned int var_21 = 1042296442U;
void init() {
}

void checksum() {
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
