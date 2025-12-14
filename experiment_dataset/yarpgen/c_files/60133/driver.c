#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7478043242715939687LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11612007138590260585ULL;
unsigned char var_3 = (unsigned char)42;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2924986656U;
unsigned int var_6 = 2042008777U;
int var_10 = 2000282918;
unsigned int var_11 = 3594949143U;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
signed char var_13 = (signed char)24;
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
