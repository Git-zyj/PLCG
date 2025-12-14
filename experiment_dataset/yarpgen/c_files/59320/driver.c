#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5723462746988261308ULL;
short var_13 = (short)-2540;
unsigned long long int var_16 = 7029014140996808792ULL;
unsigned int var_17 = 162482547U;
int zero = 0;
unsigned long long int var_20 = 8693581885492059032ULL;
unsigned char var_21 = (unsigned char)94;
void init() {
}

void checksum() {
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
