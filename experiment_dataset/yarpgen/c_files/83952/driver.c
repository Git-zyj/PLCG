#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14349333161773136398ULL;
short var_2 = (short)-27622;
unsigned long long int var_5 = 2378383253000597748ULL;
short var_6 = (short)14230;
int var_7 = 1182427059;
int var_8 = 2105228706;
unsigned long long int var_11 = 14458512229926780883ULL;
unsigned long long int var_12 = 5165201003712093092ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 10077668908951625498ULL;
signed char var_20 = (signed char)-87;
unsigned char var_21 = (unsigned char)169;
void init() {
}

void checksum() {
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
