#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 352235224;
long long int var_7 = -61906280312287309LL;
long long int var_8 = 6161496769574805980LL;
unsigned int var_9 = 3330412514U;
unsigned short var_12 = (unsigned short)22394;
unsigned char var_13 = (unsigned char)249;
int var_16 = -707182093;
int zero = 0;
long long int var_17 = 8884634822204202217LL;
int var_18 = -1655263252;
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
