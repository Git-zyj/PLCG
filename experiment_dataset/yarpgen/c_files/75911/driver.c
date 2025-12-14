#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60027;
signed char var_2 = (signed char)14;
unsigned char var_4 = (unsigned char)50;
unsigned int var_5 = 402502745U;
unsigned int var_7 = 1206948985U;
unsigned int var_8 = 2844621390U;
unsigned int var_10 = 1045317361U;
long long int var_12 = 3182541834423360593LL;
signed char var_13 = (signed char)-71;
long long int var_15 = 223994828525924684LL;
signed char var_16 = (signed char)-60;
unsigned short var_17 = (unsigned short)11398;
int zero = 0;
unsigned char var_18 = (unsigned char)187;
unsigned char var_19 = (unsigned char)155;
unsigned char var_20 = (unsigned char)202;
unsigned short var_21 = (unsigned short)8289;
unsigned int var_22 = 2189785939U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
