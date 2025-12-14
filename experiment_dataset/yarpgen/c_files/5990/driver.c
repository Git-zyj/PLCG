#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
unsigned long long int var_3 = 3992052158468380801ULL;
unsigned long long int var_9 = 17119485731608174663ULL;
int zero = 0;
int var_13 = -154183578;
unsigned short var_14 = (unsigned short)11028;
void init() {
}

void checksum() {
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
