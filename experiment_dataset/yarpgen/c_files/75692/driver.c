#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
unsigned int var_2 = 3088908463U;
unsigned char var_3 = (unsigned char)223;
int var_6 = -1195658680;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)55823;
unsigned char var_14 = (unsigned char)132;
int var_15 = 455092259;
long long int var_16 = 5956042591328785553LL;
unsigned short var_17 = (unsigned short)25770;
int zero = 0;
signed char var_19 = (signed char)13;
unsigned char var_20 = (unsigned char)183;
signed char var_21 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
