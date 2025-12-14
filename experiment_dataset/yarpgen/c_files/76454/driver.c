#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 505079445209102314ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)60;
long long int var_4 = -2698873137272817210LL;
short var_5 = (short)-9079;
int var_8 = 1545070255;
short var_11 = (short)1832;
unsigned long long int var_14 = 14976776899451329929ULL;
unsigned long long int var_16 = 7202219656933561563ULL;
unsigned char var_17 = (unsigned char)224;
unsigned long long int var_18 = 16631273661677453288ULL;
int var_19 = 1911037456;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
unsigned char var_21 = (unsigned char)203;
unsigned int var_22 = 3944680945U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
