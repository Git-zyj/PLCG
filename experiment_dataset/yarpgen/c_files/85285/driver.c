#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2101937248;
unsigned long long int var_4 = 8160141682152097472ULL;
long long int var_8 = -7951544600024314146LL;
unsigned long long int var_16 = 17527852514007992348ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)5282;
unsigned long long int var_20 = 15276591905960094269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
