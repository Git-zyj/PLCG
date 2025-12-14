#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8534679058877867959LL;
signed char var_5 = (signed char)40;
signed char var_7 = (signed char)99;
unsigned long long int var_14 = 2233863100463654726ULL;
long long int var_16 = 5271245077977177206LL;
int zero = 0;
unsigned short var_17 = (unsigned short)50184;
signed char var_18 = (signed char)-6;
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
