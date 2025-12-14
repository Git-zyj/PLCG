#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
signed char var_2 = (signed char)(-127 - 1);
int var_8 = -1483337083;
int var_9 = -1505676123;
int zero = 0;
signed char var_11 = (signed char)-31;
int var_12 = -1913566626;
signed char var_13 = (signed char)76;
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
