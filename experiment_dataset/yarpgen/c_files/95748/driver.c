#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1187513261313877043LL;
long long int var_2 = -6698718199322588875LL;
long long int var_3 = 2214817669006489852LL;
int zero = 0;
long long int var_15 = 1708220168587225679LL;
long long int var_16 = 1922689780603530970LL;
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
