#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2487183743554616597LL;
signed char var_6 = (signed char)-48;
unsigned int var_11 = 2867376106U;
int zero = 0;
unsigned short var_14 = (unsigned short)37432;
unsigned int var_15 = 2740529005U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
