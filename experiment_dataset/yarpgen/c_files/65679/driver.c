#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16682;
unsigned long long int var_5 = 14205965099072760676ULL;
unsigned long long int var_17 = 2325989351491270816ULL;
int var_19 = 1306446613;
int zero = 0;
signed char var_20 = (signed char)-106;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
