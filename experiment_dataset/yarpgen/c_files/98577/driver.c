#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 444608529;
unsigned long long int var_8 = 12181639866116290804ULL;
signed char var_9 = (signed char)18;
int zero = 0;
unsigned long long int var_15 = 14906266532634557101ULL;
unsigned short var_16 = (unsigned short)15671;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
