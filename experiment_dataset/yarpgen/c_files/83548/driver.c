#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned long long int var_9 = 1610396202207677319ULL;
unsigned long long int var_10 = 10287358587864913776ULL;
signed char var_14 = (signed char)123;
short var_15 = (short)13336;
int zero = 0;
unsigned short var_19 = (unsigned short)11023;
int var_20 = -803802719;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
