#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2602431816U;
signed char var_7 = (signed char)116;
unsigned char var_9 = (unsigned char)35;
int zero = 0;
long long int var_16 = 838843411370706524LL;
unsigned long long int var_17 = 6157606732893326877ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
