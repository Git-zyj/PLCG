#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24402;
unsigned char var_1 = (unsigned char)179;
unsigned short var_2 = (unsigned short)23148;
unsigned long long int var_3 = 18032331953666123715ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2257660734U;
signed char var_7 = (signed char)63;
long long int var_9 = -2661791139350590906LL;
unsigned short var_10 = (unsigned short)578;
int zero = 0;
unsigned long long int var_11 = 11046045407473987374ULL;
long long int var_12 = 951793264301419338LL;
long long int var_13 = 4159878372394859947LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
