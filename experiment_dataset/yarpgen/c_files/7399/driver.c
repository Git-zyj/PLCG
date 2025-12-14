#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2718732984U;
unsigned int var_1 = 3436536556U;
unsigned int var_4 = 3429208259U;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 2545736619U;
int zero = 0;
unsigned long long int var_13 = 3608867505011488158ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15314993198013328127ULL;
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
