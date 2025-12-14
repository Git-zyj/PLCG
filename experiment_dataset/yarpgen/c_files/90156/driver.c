#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1166;
short var_2 = (short)4881;
unsigned int var_3 = 1982811217U;
int var_7 = 1525307206;
unsigned long long int var_8 = 15990610448513714090ULL;
short var_9 = (short)11094;
int zero = 0;
short var_10 = (short)-1412;
int var_11 = -1351951072;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8756;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
