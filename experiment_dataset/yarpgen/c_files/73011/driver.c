#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 153102578U;
unsigned char var_7 = (unsigned char)13;
unsigned long long int var_9 = 18217354856028614221ULL;
unsigned long long int var_11 = 5817444797623507132ULL;
unsigned long long int var_13 = 5136743769855150502ULL;
int zero = 0;
unsigned long long int var_15 = 18256946537936654502ULL;
unsigned char var_16 = (unsigned char)68;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
