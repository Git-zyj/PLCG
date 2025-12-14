#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64730;
long long int var_3 = -6940867425228082414LL;
long long int var_4 = 7907837459845621348LL;
int var_6 = 2044880406;
int zero = 0;
signed char var_11 = (signed char)-2;
long long int var_12 = 2648131046639208386LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
