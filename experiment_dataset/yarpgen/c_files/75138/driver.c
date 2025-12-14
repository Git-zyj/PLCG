#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46076;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 183841486U;
unsigned char var_6 = (unsigned char)174;
unsigned int var_9 = 773317500U;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)73;
unsigned short var_15 = (unsigned short)64468;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 7722241793581433900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
