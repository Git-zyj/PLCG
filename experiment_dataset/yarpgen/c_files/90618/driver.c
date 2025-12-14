#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55358;
unsigned short var_1 = (unsigned short)33527;
long long int var_3 = 5126754305410610426LL;
unsigned long long int var_8 = 15969121589353639037ULL;
unsigned long long int var_9 = 13905232987931541990ULL;
short var_12 = (short)-850;
unsigned short var_14 = (unsigned short)4515;
int zero = 0;
signed char var_16 = (signed char)67;
unsigned long long int var_17 = 15910052144471427911ULL;
unsigned char var_18 = (unsigned char)59;
unsigned int var_19 = 2908914703U;
unsigned short var_20 = (unsigned short)2052;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
