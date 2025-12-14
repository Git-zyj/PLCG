#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
unsigned long long int var_3 = 13870815439991029023ULL;
unsigned char var_4 = (unsigned char)42;
int var_6 = -385501660;
unsigned int var_7 = 767781395U;
unsigned int var_9 = 2980470767U;
unsigned char var_10 = (unsigned char)14;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-48;
signed char var_13 = (signed char)-54;
short var_14 = (short)-9133;
void init() {
}

void checksum() {
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
