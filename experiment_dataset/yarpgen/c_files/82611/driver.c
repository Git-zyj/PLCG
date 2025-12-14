#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3219329270U;
int var_3 = -1170002301;
unsigned char var_5 = (unsigned char)135;
unsigned int var_7 = 2033320104U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 7960078148711920774ULL;
int var_17 = -2132148447;
unsigned int var_18 = 1636756548U;
int zero = 0;
int var_20 = 1843437587;
signed char var_21 = (signed char)98;
signed char var_22 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
