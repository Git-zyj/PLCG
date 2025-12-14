#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
unsigned long long int var_14 = 921296213075986499ULL;
signed char var_15 = (signed char)-50;
int zero = 0;
unsigned long long int var_20 = 18285406733201737775ULL;
unsigned long long int var_21 = 15299805810258401046ULL;
unsigned long long int var_22 = 12395485446731646857ULL;
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
