#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16604341871469945701ULL;
unsigned char var_4 = (unsigned char)134;
unsigned char var_5 = (unsigned char)111;
unsigned long long int var_7 = 36240052557518656ULL;
int zero = 0;
unsigned long long int var_13 = 11102846951197909828ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int var_16 = 1750370021;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
