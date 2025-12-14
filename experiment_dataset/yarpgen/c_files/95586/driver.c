#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4906461797721444238LL;
short var_5 = (short)-25569;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)17;
short var_9 = (short)29825;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3087863335U;
short var_13 = (short)23869;
unsigned int var_15 = 3181138782U;
unsigned int var_16 = 2988721953U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3217738964U;
short var_20 = (short)-9553;
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
