#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1295560606U;
unsigned long long int var_4 = 8453771626481471574ULL;
unsigned int var_6 = 1898131683U;
unsigned long long int var_7 = 16587295305584508896ULL;
long long int var_10 = 30585829598661854LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 4221153864232311388ULL;
unsigned long long int var_15 = 4588488749171431779ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2446766401U;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
unsigned int var_20 = 2604389858U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
