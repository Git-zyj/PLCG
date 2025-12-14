#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2258669179U;
short var_5 = (short)17054;
unsigned long long int var_6 = 17162798277355546427ULL;
unsigned int var_7 = 879587853U;
unsigned long long int var_12 = 12103692335308433157ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 9837882588848389795ULL;
signed char var_18 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
