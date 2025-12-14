#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13509501514578722899ULL;
unsigned long long int var_1 = 13204017522684051507ULL;
unsigned int var_8 = 4241407421U;
unsigned int var_11 = 259377056U;
int zero = 0;
unsigned char var_12 = (unsigned char)120;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
