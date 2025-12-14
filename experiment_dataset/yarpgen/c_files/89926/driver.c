#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17041;
int var_5 = -627724780;
unsigned char var_7 = (unsigned char)201;
unsigned int var_12 = 3682901531U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)42321;
unsigned long long int var_16 = 14909811883991901285ULL;
int zero = 0;
unsigned int var_18 = 2691595371U;
unsigned char var_19 = (unsigned char)194;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
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
