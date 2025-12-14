#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1175899696798584302LL;
unsigned short var_3 = (unsigned short)18253;
short var_5 = (short)22086;
unsigned int var_6 = 3961547374U;
unsigned int var_10 = 58188875U;
int zero = 0;
unsigned char var_15 = (unsigned char)250;
short var_16 = (short)-27074;
unsigned int var_17 = 3501580953U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
