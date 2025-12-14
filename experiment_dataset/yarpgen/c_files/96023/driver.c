#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9318807457303877793ULL;
unsigned char var_4 = (unsigned char)85;
signed char var_5 = (signed char)-5;
unsigned int var_7 = 2789196406U;
unsigned int var_8 = 3033050354U;
unsigned int var_9 = 3459819294U;
long long int var_10 = 532930886667393120LL;
unsigned int var_11 = 3113699001U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3741702953U;
long long int var_18 = -1998071081264462953LL;
signed char var_19 = (signed char)-60;
short var_20 = (short)-5638;
signed char var_21 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
