#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3273637236U;
long long int var_1 = -5458419515726610733LL;
unsigned short var_2 = (unsigned short)30219;
long long int var_7 = -945725380339624032LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)76;
unsigned long long int var_12 = 14609957753201073449ULL;
int var_13 = 505709246;
int var_15 = 2080999195;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)82;
int var_19 = -696099775;
unsigned short var_20 = (unsigned short)36101;
unsigned int var_21 = 3960303868U;
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
