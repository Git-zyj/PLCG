#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3157485053U;
long long int var_6 = 2300417098259331771LL;
short var_11 = (short)28946;
unsigned int var_16 = 2045488223U;
int zero = 0;
long long int var_17 = -3784899011419295794LL;
int var_18 = -189359302;
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
