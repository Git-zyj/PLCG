#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14560;
signed char var_1 = (signed char)24;
unsigned char var_2 = (unsigned char)151;
unsigned short var_4 = (unsigned short)9956;
signed char var_5 = (signed char)-88;
signed char var_6 = (signed char)96;
unsigned char var_7 = (unsigned char)93;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)43835;
int var_11 = -1112417942;
signed char var_13 = (signed char)116;
unsigned int var_14 = 3705785278U;
signed char var_15 = (signed char)3;
int zero = 0;
unsigned int var_16 = 1280447118U;
unsigned int var_17 = 3610163799U;
signed char var_18 = (signed char)78;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
