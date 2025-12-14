#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 408300671U;
unsigned long long int var_2 = 5546717435961584263ULL;
unsigned int var_3 = 1685502906U;
signed char var_4 = (signed char)-24;
unsigned int var_6 = 3587739021U;
int var_7 = -824773780;
short var_9 = (short)-23221;
int zero = 0;
unsigned int var_10 = 2150620803U;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
