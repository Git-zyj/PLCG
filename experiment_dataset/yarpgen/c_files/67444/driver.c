#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1450581271;
_Bool var_5 = (_Bool)1;
long long int var_7 = 860638427032551670LL;
int zero = 0;
signed char var_12 = (signed char)-67;
unsigned long long int var_13 = 16241706486997173684ULL;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
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
