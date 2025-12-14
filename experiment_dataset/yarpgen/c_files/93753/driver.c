#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1644762612;
unsigned int var_3 = 22712988U;
unsigned int var_4 = 878770439U;
unsigned long long int var_9 = 11211666310296621594ULL;
unsigned int var_10 = 487333025U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1445274916U;
int var_13 = -253629566;
unsigned int var_14 = 3409523288U;
unsigned int var_15 = 904415491U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
