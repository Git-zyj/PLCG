#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32754;
short var_1 = (short)-10672;
short var_5 = (short)25788;
short var_6 = (short)-28919;
short var_7 = (short)4632;
short var_8 = (short)14926;
int zero = 0;
short var_11 = (short)23922;
short var_12 = (short)25257;
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
