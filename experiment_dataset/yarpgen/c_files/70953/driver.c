#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3605010643271208520ULL;
signed char var_3 = (signed char)-89;
int zero = 0;
unsigned char var_14 = (unsigned char)98;
unsigned int var_15 = 299220936U;
unsigned long long int var_16 = 4162413830150240864ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
