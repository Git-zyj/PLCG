#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2566609933U;
int var_1 = -1064001046;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2133234068U;
int var_5 = -786422998;
unsigned char var_7 = (unsigned char)95;
int var_8 = -1531978273;
unsigned int var_9 = 2242727149U;
unsigned int var_11 = 2801354605U;
int var_12 = -1393785661;
int zero = 0;
signed char var_17 = (signed char)18;
unsigned short var_18 = (unsigned short)52678;
unsigned short var_19 = (unsigned short)10238;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
