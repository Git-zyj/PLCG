#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1961770166;
signed char var_2 = (signed char)121;
int var_3 = 372717935;
int var_4 = 1051370004;
long long int var_5 = -3161121258334713031LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12182213419957688318ULL;
unsigned long long int var_8 = 5665102567398551597ULL;
signed char var_10 = (signed char)-19;
signed char var_13 = (signed char)-82;
unsigned long long int var_14 = 10940609979162889450ULL;
int zero = 0;
int var_15 = -946953495;
unsigned long long int var_16 = 13448039874538367557ULL;
signed char var_17 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
