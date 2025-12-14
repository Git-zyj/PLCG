#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 831710624;
short var_2 = (short)-6948;
int var_3 = -1640845539;
long long int var_4 = 8664291771856728423LL;
unsigned short var_5 = (unsigned short)36140;
unsigned int var_6 = 2684277240U;
int var_7 = 1325268211;
short var_8 = (short)-27271;
unsigned short var_9 = (unsigned short)17753;
int zero = 0;
int var_10 = -1091376975;
int var_11 = -1463729564;
unsigned char var_12 = (unsigned char)67;
short var_13 = (short)-16105;
unsigned char var_14 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
