#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6450678481545955697LL;
short var_4 = (short)15914;
unsigned int var_15 = 3710485591U;
int zero = 0;
unsigned long long int var_20 = 7757445344536574301ULL;
signed char var_21 = (signed char)-109;
int var_22 = -1611946359;
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
