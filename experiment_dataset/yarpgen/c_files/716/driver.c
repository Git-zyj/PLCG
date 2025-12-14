#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 13429320610001564105ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)231;
int zero = 0;
unsigned long long int var_14 = 7120223504042316108ULL;
unsigned long long int var_15 = 5112661772389858618ULL;
unsigned long long int var_16 = 16785698460869571173ULL;
unsigned short var_17 = (unsigned short)35197;
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
