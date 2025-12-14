#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4232888523U;
unsigned long long int var_8 = 10948699202036637530ULL;
int zero = 0;
unsigned int var_11 = 1652323964U;
unsigned short var_12 = (unsigned short)17230;
unsigned long long int var_13 = 12212865932412621550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
