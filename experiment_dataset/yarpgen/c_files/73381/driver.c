#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8973148080603599223LL;
unsigned short var_5 = (unsigned short)26282;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-9195;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
unsigned long long int var_17 = 14850426986696676176ULL;
signed char var_18 = (signed char)112;
unsigned long long int var_19 = 14185289531626607024ULL;
unsigned short var_20 = (unsigned short)938;
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
