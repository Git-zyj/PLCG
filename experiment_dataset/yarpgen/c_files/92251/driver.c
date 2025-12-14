#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1279835263U;
unsigned char var_1 = (unsigned char)231;
_Bool var_3 = (_Bool)1;
long long int var_4 = -4091068292449830982LL;
unsigned short var_5 = (unsigned short)9242;
unsigned char var_6 = (unsigned char)81;
int var_7 = 748327501;
unsigned int var_9 = 272540802U;
signed char var_12 = (signed char)105;
int zero = 0;
unsigned int var_14 = 1652839725U;
unsigned long long int var_15 = 18129558649569975749ULL;
signed char var_16 = (signed char)-6;
unsigned int var_17 = 1732336147U;
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
