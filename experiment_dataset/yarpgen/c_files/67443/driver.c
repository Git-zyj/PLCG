#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8085133084891665448ULL;
short var_7 = (short)6249;
signed char var_12 = (signed char)107;
int zero = 0;
signed char var_14 = (signed char)123;
int var_15 = -1546328968;
unsigned long long int var_16 = 5136894145512916380ULL;
long long int var_17 = -283554376836255936LL;
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
