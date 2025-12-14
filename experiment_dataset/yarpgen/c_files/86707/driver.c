#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1927366034;
short var_3 = (short)24125;
short var_5 = (short)17980;
int var_7 = -1291072379;
unsigned char var_8 = (unsigned char)23;
unsigned long long int var_9 = 18197645351603929834ULL;
signed char var_14 = (signed char)46;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_20 = (short)30354;
long long int var_21 = 3882444432150371242LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)1851;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
