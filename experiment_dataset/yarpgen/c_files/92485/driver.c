#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4946015065167896355ULL;
long long int var_3 = -1457935226544913334LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7980936603573322915ULL;
int zero = 0;
long long int var_10 = -7553993740363938754LL;
long long int var_11 = -4766386125901481466LL;
long long int var_12 = -7816364203890279253LL;
int var_13 = 1970526074;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
