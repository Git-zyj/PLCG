#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 814135981;
signed char var_10 = (signed char)-46;
signed char var_13 = (signed char)75;
_Bool var_15 = (_Bool)0;
int var_19 = 928161733;
int zero = 0;
int var_20 = 1558313161;
int var_21 = 1912815963;
unsigned int var_22 = 79365359U;
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
