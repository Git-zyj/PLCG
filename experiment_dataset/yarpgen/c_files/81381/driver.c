#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1491944655;
signed char var_6 = (signed char)-14;
signed char var_7 = (signed char)85;
long long int var_8 = 4010414898096572098LL;
int zero = 0;
unsigned int var_10 = 2210086364U;
long long int var_11 = -7694231471820812264LL;
unsigned long long int var_12 = 7733788185254599793ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
