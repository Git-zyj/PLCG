#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 274828796;
int var_9 = -2125068734;
unsigned short var_16 = (unsigned short)32234;
unsigned short var_18 = (unsigned short)16640;
int zero = 0;
unsigned int var_20 = 946952448U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 12476038946806659124ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
