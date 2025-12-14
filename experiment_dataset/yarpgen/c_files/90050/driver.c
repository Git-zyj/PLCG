#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1306;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6756923550261742384ULL;
signed char var_11 = (signed char)57;
int zero = 0;
unsigned int var_12 = 646946731U;
long long int var_13 = -595488674275546833LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
