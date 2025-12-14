#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29306;
unsigned long long int var_9 = 2005245331332955170ULL;
int var_10 = -1829721959;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)96;
unsigned long long int var_19 = 17856657999036711756ULL;
_Bool var_20 = (_Bool)0;
int var_21 = 732251275;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
