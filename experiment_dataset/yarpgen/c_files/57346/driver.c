#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
signed char var_1 = (signed char)-89;
unsigned short var_3 = (unsigned short)2692;
unsigned int var_4 = 3236949010U;
unsigned short var_11 = (unsigned short)9667;
unsigned short var_12 = (unsigned short)16077;
long long int var_13 = -8647467060657530391LL;
signed char var_14 = (signed char)85;
int zero = 0;
unsigned long long int var_15 = 617769560290404202ULL;
unsigned char var_16 = (unsigned char)67;
unsigned char var_17 = (unsigned char)148;
unsigned int var_18 = 899918987U;
long long int var_19 = 6330028421500777018LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
