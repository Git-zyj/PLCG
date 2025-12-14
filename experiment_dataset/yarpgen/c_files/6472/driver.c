#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7818945316780365577LL;
signed char var_1 = (signed char)-121;
signed char var_4 = (signed char)61;
unsigned short var_7 = (unsigned short)9842;
int zero = 0;
unsigned short var_11 = (unsigned short)6805;
long long int var_12 = 5853836150390454593LL;
unsigned char var_13 = (unsigned char)209;
signed char var_14 = (signed char)-43;
long long int var_15 = -294181407893891347LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
