#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-112;
unsigned short var_9 = (unsigned short)13050;
unsigned int var_11 = 2995010578U;
int zero = 0;
long long int var_17 = -230479372522771580LL;
long long int var_18 = 7376813040222007124LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
