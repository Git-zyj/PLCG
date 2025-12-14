#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3468394702797356002ULL;
unsigned int var_5 = 3923496737U;
signed char var_7 = (signed char)-82;
unsigned long long int var_9 = 1351659421463836383ULL;
unsigned int var_12 = 1403352484U;
int zero = 0;
signed char var_20 = (signed char)-101;
unsigned long long int var_21 = 9577987904458844300ULL;
short var_22 = (short)-1701;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
