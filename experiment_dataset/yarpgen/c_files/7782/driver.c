#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2400877819869202957LL;
unsigned char var_5 = (unsigned char)66;
long long int var_14 = -4072341315114201165LL;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
short var_20 = (short)5487;
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
