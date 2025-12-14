#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -391188381642978767LL;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2580875456U;
signed char var_6 = (signed char)-48;
unsigned long long int var_7 = 8974168594306222452ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-44;
unsigned long long int var_16 = 16458217236380197939ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
