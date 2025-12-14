#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1728853419;
unsigned short var_10 = (unsigned short)15373;
unsigned int var_12 = 3938152421U;
int zero = 0;
unsigned int var_13 = 1341414813U;
unsigned char var_14 = (unsigned char)26;
int var_15 = 768559114;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)61507;
unsigned short var_18 = (unsigned short)1438;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
