#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)43;
signed char var_5 = (signed char)-93;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 11148743225871262441ULL;
int zero = 0;
long long int var_19 = 8422356625899073293LL;
unsigned long long int var_20 = 8691266925606281234ULL;
int var_21 = -572427663;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
