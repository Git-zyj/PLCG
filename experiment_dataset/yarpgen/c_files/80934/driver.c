#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9854768683166403548ULL;
unsigned int var_9 = 2114180871U;
signed char var_13 = (signed char)59;
unsigned long long int var_17 = 15104948323369847320ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)207;
unsigned char var_19 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
