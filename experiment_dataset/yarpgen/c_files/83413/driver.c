#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8911333284433582155LL;
unsigned char var_11 = (unsigned char)52;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)34112;
unsigned int var_16 = 1228568937U;
int zero = 0;
long long int var_17 = -1851263889558739443LL;
unsigned short var_18 = (unsigned short)3593;
unsigned int var_19 = 3487003224U;
void init() {
}

void checksum() {
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
