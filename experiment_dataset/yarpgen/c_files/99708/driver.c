#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4891898142431353017ULL;
unsigned int var_1 = 1305055198U;
unsigned char var_2 = (unsigned char)30;
int var_3 = 687916191;
unsigned char var_4 = (unsigned char)231;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6408955370373524756LL;
unsigned int var_8 = 104256435U;
unsigned long long int var_10 = 15053033146517036066ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 892392465U;
unsigned int var_13 = 3899972117U;
int var_14 = -1793665367;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
