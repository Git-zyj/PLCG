#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2457203047U;
unsigned long long int var_7 = 8884031164880995469ULL;
signed char var_8 = (signed char)-39;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1041273978U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
