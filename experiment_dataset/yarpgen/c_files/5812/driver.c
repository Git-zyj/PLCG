#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3205985656710780968LL;
int var_5 = 1900092580;
long long int var_6 = 2073370269390700975LL;
int var_9 = -743588672;
unsigned int var_10 = 372054908U;
int zero = 0;
unsigned int var_12 = 2627635818U;
short var_13 = (short)11090;
void init() {
}

void checksum() {
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
