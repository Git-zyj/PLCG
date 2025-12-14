#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8142889827255455869ULL;
unsigned short var_7 = (unsigned short)25739;
unsigned short var_8 = (unsigned short)43704;
signed char var_11 = (signed char)-123;
int zero = 0;
unsigned long long int var_14 = 16154539315387681742ULL;
unsigned short var_15 = (unsigned short)3674;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
