#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)250;
signed char var_4 = (signed char)21;
signed char var_5 = (signed char)64;
short var_6 = (short)15590;
short var_7 = (short)-21219;
long long int var_8 = 1277136570842817698LL;
int var_9 = 2050229248;
int zero = 0;
unsigned char var_10 = (unsigned char)90;
unsigned short var_11 = (unsigned short)59915;
unsigned int var_12 = 3271840229U;
int var_13 = -1013528373;
long long int var_14 = 7883336826144558706LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
