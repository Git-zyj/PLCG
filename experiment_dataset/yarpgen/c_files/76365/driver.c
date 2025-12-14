#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
long long int var_2 = -9216652958359662120LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)113;
short var_5 = (short)10804;
signed char var_6 = (signed char)94;
int var_8 = -243683114;
unsigned long long int var_10 = 17335875138348235382ULL;
unsigned int var_11 = 1265333280U;
int zero = 0;
unsigned short var_12 = (unsigned short)14911;
unsigned short var_13 = (unsigned short)50414;
signed char var_14 = (signed char)57;
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
