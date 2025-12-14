#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19758;
unsigned long long int var_10 = 11994288301273580223ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 2661229843U;
unsigned long long int var_18 = 1782649557707479667ULL;
signed char var_19 = (signed char)-101;
int zero = 0;
signed char var_20 = (signed char)61;
signed char var_21 = (signed char)66;
unsigned long long int var_22 = 3322179392514064505ULL;
void init() {
}

void checksum() {
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
