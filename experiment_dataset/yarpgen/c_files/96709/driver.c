#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9195689789892060055LL;
signed char var_8 = (signed char)86;
long long int var_12 = -9031954215900947913LL;
int zero = 0;
unsigned short var_13 = (unsigned short)9719;
unsigned long long int var_14 = 18270598840895791380ULL;
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
