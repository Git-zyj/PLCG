#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)104;
int var_3 = 2138137273;
int var_5 = 834011509;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4110910344845536037ULL;
signed char var_9 = (signed char)-112;
int var_10 = -1329310106;
signed char var_11 = (signed char)-67;
long long int var_12 = 3146301608545076969LL;
int zero = 0;
unsigned int var_13 = 2699506672U;
long long int var_14 = -6256683171280444893LL;
int var_15 = -1554379107;
void init() {
}

void checksum() {
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
