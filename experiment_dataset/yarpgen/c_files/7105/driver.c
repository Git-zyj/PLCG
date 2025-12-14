#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
unsigned long long int var_4 = 12534010412055447786ULL;
unsigned long long int var_5 = 8657257190664954787ULL;
short var_7 = (short)26982;
long long int var_13 = -3206935629162925707LL;
unsigned int var_17 = 3978956799U;
int zero = 0;
unsigned long long int var_18 = 2913336464325141694ULL;
long long int var_19 = 317069526137646471LL;
unsigned long long int var_20 = 13059266448237514544ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
