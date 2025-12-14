#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27297;
short var_1 = (short)31024;
short var_4 = (short)-10108;
short var_5 = (short)25394;
short var_6 = (short)8552;
short var_7 = (short)8086;
long long int var_11 = 8872964558097344816LL;
short var_13 = (short)-9368;
int zero = 0;
long long int var_14 = 3391528657685397079LL;
long long int var_15 = 2410098890823587133LL;
void init() {
}

void checksum() {
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
