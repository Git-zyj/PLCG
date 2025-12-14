#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3882407229U;
unsigned char var_1 = (unsigned char)208;
unsigned int var_5 = 3648047928U;
unsigned long long int var_7 = 7925135143001100966ULL;
int var_8 = 644622633;
int zero = 0;
unsigned int var_11 = 773986312U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2598682413U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
