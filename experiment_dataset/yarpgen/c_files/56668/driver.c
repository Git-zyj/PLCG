#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)37;
unsigned long long int var_3 = 13138165917379283503ULL;
unsigned char var_4 = (unsigned char)170;
short var_5 = (short)17239;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)60241;
long long int var_10 = 3611721999570642750LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1642329961U;
unsigned char var_14 = (unsigned char)162;
unsigned int var_15 = 1827330272U;
unsigned short var_16 = (unsigned short)51242;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
