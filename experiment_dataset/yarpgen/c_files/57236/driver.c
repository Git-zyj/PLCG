#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3154106298071489533LL;
unsigned int var_4 = 2859139486U;
short var_5 = (short)-28629;
long long int var_9 = -5584255163573908221LL;
int zero = 0;
signed char var_12 = (signed char)-57;
long long int var_13 = -2099750750309176537LL;
short var_14 = (short)2050;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
