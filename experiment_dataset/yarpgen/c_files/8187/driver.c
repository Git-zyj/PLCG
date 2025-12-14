#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
short var_1 = (short)-8760;
unsigned long long int var_4 = 5409138252879046062ULL;
long long int var_6 = -255632375252511294LL;
unsigned long long int var_7 = 16569546920854178559ULL;
long long int var_8 = 2308302500696654038LL;
short var_10 = (short)-13524;
unsigned long long int var_16 = 5897478953320607693ULL;
int zero = 0;
short var_18 = (short)11150;
int var_19 = -467103908;
unsigned long long int var_20 = 1327027010592389194ULL;
_Bool var_21 = (_Bool)0;
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
