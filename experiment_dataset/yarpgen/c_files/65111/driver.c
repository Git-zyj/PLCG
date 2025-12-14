#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
_Bool var_2 = (_Bool)1;
long long int var_3 = -502798099023124244LL;
short var_6 = (short)-21050;
_Bool var_8 = (_Bool)0;
unsigned int var_13 = 3814809165U;
int zero = 0;
int var_16 = -110230333;
short var_17 = (short)-21417;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
