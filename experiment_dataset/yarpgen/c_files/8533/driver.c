#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16859661576344792022ULL;
signed char var_5 = (signed char)82;
signed char var_6 = (signed char)77;
unsigned int var_9 = 1595524328U;
int zero = 0;
unsigned int var_12 = 522880187U;
unsigned short var_13 = (unsigned short)44508;
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
