#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)23;
unsigned long long int var_4 = 4025177533618643293ULL;
unsigned int var_8 = 1198436652U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 13832407425179526946ULL;
unsigned long long int var_13 = 17553993963997084803ULL;
unsigned char var_14 = (unsigned char)244;
signed char var_15 = (signed char)-6;
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
