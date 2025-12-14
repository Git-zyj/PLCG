#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_5 = (unsigned char)197;
unsigned char var_8 = (unsigned char)106;
unsigned long long int var_9 = 11028977051248698492ULL;
unsigned int var_14 = 2096661431U;
signed char var_15 = (signed char)-102;
short var_18 = (short)-7340;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-9962;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
