#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26975;
unsigned char var_2 = (unsigned char)81;
unsigned char var_5 = (unsigned char)167;
unsigned long long int var_6 = 12211275076483566639ULL;
unsigned short var_7 = (unsigned short)29580;
unsigned long long int var_9 = 6811163197395641581ULL;
int zero = 0;
unsigned int var_17 = 60098621U;
unsigned char var_18 = (unsigned char)23;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 767597746U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
