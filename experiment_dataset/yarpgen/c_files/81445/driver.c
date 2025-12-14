#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned long long int var_1 = 8672315737309335484ULL;
short var_2 = (short)-25371;
unsigned long long int var_4 = 3508388055043243646ULL;
signed char var_7 = (signed char)11;
unsigned int var_9 = 1431291168U;
unsigned int var_10 = 1470902887U;
signed char var_11 = (signed char)-88;
int var_13 = 91058045;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1496902921U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-77;
unsigned int var_21 = 1070393358U;
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
