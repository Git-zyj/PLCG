#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14431935852486531871ULL;
unsigned long long int var_13 = 9526315209412291768ULL;
int zero = 0;
unsigned long long int var_14 = 28379065949713385ULL;
unsigned long long int var_15 = 12926295260193570525ULL;
unsigned long long int var_16 = 6942910644860091081ULL;
unsigned long long int var_17 = 12321284465231882150ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
