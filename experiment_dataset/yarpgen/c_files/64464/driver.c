#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11676964492365018768ULL;
short var_10 = (short)-5924;
unsigned long long int var_15 = 6883692417667558324ULL;
unsigned int var_16 = 237417148U;
int zero = 0;
unsigned char var_19 = (unsigned char)171;
signed char var_20 = (signed char)-77;
int var_21 = 826434802;
unsigned long long int var_22 = 8345515383907451926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
