#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4097432974U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3881615004U;
signed char var_7 = (signed char)-38;
unsigned char var_8 = (unsigned char)9;
int var_9 = 2106772937;
int zero = 0;
unsigned int var_10 = 81410711U;
int var_11 = -533068406;
signed char var_12 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
