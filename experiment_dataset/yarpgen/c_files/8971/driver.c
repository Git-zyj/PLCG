#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3160;
unsigned int var_1 = 2271566060U;
signed char var_2 = (signed char)36;
long long int var_5 = -8334997689691458917LL;
long long int var_8 = 7039431916677687443LL;
unsigned char var_9 = (unsigned char)77;
int var_12 = 425527904;
long long int var_15 = -9181682739701169634LL;
int var_16 = -1600492209;
int zero = 0;
long long int var_20 = -235015168667691745LL;
unsigned int var_21 = 2290101856U;
unsigned int var_22 = 904606031U;
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
