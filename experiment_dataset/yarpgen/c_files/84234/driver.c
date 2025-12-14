#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18708;
unsigned short var_1 = (unsigned short)59;
signed char var_4 = (signed char)-40;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8500362078507741463LL;
long long int var_9 = 7878255861922608563LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 734490523892318168ULL;
unsigned short var_14 = (unsigned short)43690;
long long int var_15 = -3825476109925669236LL;
int var_16 = -242105528;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
