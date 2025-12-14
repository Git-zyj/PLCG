#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
int var_1 = -168703086;
int var_4 = 1869507967;
long long int var_8 = 5331924777926818296LL;
unsigned int var_9 = 3146822885U;
int var_11 = 2106075183;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -1210825382;
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
