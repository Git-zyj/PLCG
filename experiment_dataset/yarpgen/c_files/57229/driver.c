#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
unsigned short var_4 = (unsigned short)50166;
signed char var_9 = (signed char)-89;
signed char var_10 = (signed char)54;
int zero = 0;
signed char var_12 = (signed char)122;
unsigned int var_13 = 2134457220U;
long long int var_14 = 2938817737268493991LL;
signed char var_15 = (signed char)-87;
void init() {
}

void checksum() {
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
