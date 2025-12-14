#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17516590195953916962ULL;
unsigned long long int var_8 = 4331827593773023150ULL;
int zero = 0;
unsigned long long int var_11 = 9909465376059206407ULL;
unsigned long long int var_12 = 11135646709823543469ULL;
unsigned long long int var_13 = 17107917762628660588ULL;
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
