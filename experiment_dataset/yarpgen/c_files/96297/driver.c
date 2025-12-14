#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8099172032934702499ULL;
unsigned long long int var_3 = 1902420376445976225ULL;
unsigned long long int var_4 = 2356884767181716057ULL;
unsigned char var_5 = (unsigned char)76;
long long int var_6 = 3001622483177627909LL;
signed char var_7 = (signed char)93;
signed char var_8 = (signed char)125;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 342268743408323327LL;
signed char var_11 = (signed char)79;
long long int var_12 = -5501396565047295324LL;
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
