#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-2212;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 2096851706943037206ULL;
unsigned long long int var_13 = 14278346778118146634ULL;
unsigned long long int var_14 = 8040708615804418612ULL;
int zero = 0;
unsigned int var_15 = 4024376610U;
unsigned char var_16 = (unsigned char)35;
unsigned long long int var_17 = 12615986274524855024ULL;
void init() {
}

void checksum() {
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
