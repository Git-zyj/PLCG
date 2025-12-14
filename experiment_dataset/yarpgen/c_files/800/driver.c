#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3976622197382415639LL;
long long int var_4 = -1031346126372440084LL;
unsigned int var_5 = 3102077299U;
unsigned long long int var_7 = 9443631097110742849ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 3176691857U;
long long int var_12 = -4849654216146788915LL;
void init() {
}

void checksum() {
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
