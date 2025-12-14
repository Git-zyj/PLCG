#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1084454109;
signed char var_1 = (signed char)-97;
long long int var_3 = -2577412490452168817LL;
signed char var_4 = (signed char)-29;
unsigned int var_5 = 902714102U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-97;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
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
