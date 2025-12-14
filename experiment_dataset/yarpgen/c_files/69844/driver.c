#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_5 = -640439800;
long long int var_9 = -6968100064253767031LL;
unsigned int var_11 = 1361629289U;
long long int var_12 = 616913965793625393LL;
int zero = 0;
long long int var_14 = -1852772388404897207LL;
signed char var_15 = (signed char)-82;
unsigned char var_16 = (unsigned char)112;
int var_17 = 1582411179;
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
