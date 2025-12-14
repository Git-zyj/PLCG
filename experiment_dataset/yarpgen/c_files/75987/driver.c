#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1104956775U;
unsigned short var_1 = (unsigned short)26580;
unsigned int var_3 = 165751806U;
signed char var_5 = (signed char)81;
unsigned int var_7 = 1304788334U;
unsigned int var_11 = 4244975421U;
int zero = 0;
signed char var_12 = (signed char)-27;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 8560529825418021551ULL;
unsigned int var_15 = 744671559U;
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
