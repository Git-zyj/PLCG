#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
short var_1 = (short)-24545;
short var_6 = (short)-11026;
short var_11 = (short)-15788;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)0;
int var_17 = -648910607;
int zero = 0;
unsigned long long int var_20 = 5815731416962108792ULL;
signed char var_21 = (signed char)18;
short var_22 = (short)-13033;
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
