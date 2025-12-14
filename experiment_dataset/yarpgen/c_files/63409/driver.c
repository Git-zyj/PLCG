#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-1;
unsigned long long int var_6 = 12676956172698469691ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3756386711U;
unsigned short var_13 = (unsigned short)10675;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
