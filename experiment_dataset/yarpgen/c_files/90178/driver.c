#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2095186434;
unsigned short var_3 = (unsigned short)28990;
unsigned int var_4 = 3701281000U;
unsigned int var_5 = 1500276798U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1436306529;
unsigned char var_11 = (unsigned char)169;
short var_12 = (short)-15295;
int var_13 = 1804529591;
int var_14 = -2129555577;
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
