#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1646236709U;
unsigned int var_8 = 1770382312U;
signed char var_11 = (signed char)-41;
unsigned int var_13 = 50371917U;
unsigned int var_17 = 3229885834U;
int zero = 0;
signed char var_18 = (signed char)-10;
signed char var_19 = (signed char)-32;
unsigned int var_20 = 1928601173U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
