#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1255564987;
unsigned long long int var_2 = 15168718596189992453ULL;
unsigned int var_9 = 1054012563U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)-2319;
signed char var_15 = (signed char)-106;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
