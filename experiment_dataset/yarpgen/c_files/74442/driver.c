#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3919544494U;
unsigned int var_4 = 810806740U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3586005640U;
int var_9 = -1328019666;
int zero = 0;
unsigned long long int var_11 = 6599873762424651967ULL;
int var_12 = 1113038664;
unsigned long long int var_13 = 5128188960706814189ULL;
int var_14 = -1929543286;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
