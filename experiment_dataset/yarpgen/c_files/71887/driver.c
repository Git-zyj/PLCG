#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)95;
signed char var_8 = (signed char)58;
unsigned int var_9 = 3030183106U;
unsigned int var_10 = 2563961492U;
unsigned int var_13 = 2087726428U;
signed char var_15 = (signed char)-103;
int zero = 0;
int var_17 = 1421472410;
unsigned char var_18 = (unsigned char)162;
unsigned short var_19 = (unsigned short)39504;
void init() {
}

void checksum() {
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
