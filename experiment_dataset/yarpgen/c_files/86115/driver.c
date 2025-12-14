#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15217018813121841213ULL;
short var_10 = (short)-13803;
long long int var_12 = -6732897494297770835LL;
int zero = 0;
unsigned short var_18 = (unsigned short)3303;
int var_19 = -1606380391;
unsigned short var_20 = (unsigned short)41301;
signed char var_21 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
