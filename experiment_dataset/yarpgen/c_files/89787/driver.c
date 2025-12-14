#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2905792074U;
unsigned short var_6 = (unsigned short)29333;
unsigned short var_9 = (unsigned short)41356;
unsigned short var_11 = (unsigned short)47914;
unsigned short var_12 = (unsigned short)33330;
unsigned short var_13 = (unsigned short)25692;
signed char var_15 = (signed char)-10;
int zero = 0;
long long int var_18 = -8751438564485828001LL;
unsigned long long int var_19 = 15536865616801776785ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)23575;
void init() {
}

void checksum() {
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
