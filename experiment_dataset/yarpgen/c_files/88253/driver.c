#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1971651021U;
unsigned long long int var_2 = 5669798418203274442ULL;
unsigned long long int var_3 = 2599881133288516706ULL;
short var_4 = (short)-234;
_Bool var_5 = (_Bool)1;
int var_6 = -799514870;
int var_7 = 1786488117;
unsigned char var_8 = (unsigned char)254;
long long int var_11 = 6553350720850176479LL;
int var_12 = -1903039427;
unsigned short var_13 = (unsigned short)440;
unsigned char var_15 = (unsigned char)189;
unsigned char var_16 = (unsigned char)106;
unsigned char var_17 = (unsigned char)58;
signed char var_18 = (signed char)-4;
int zero = 0;
unsigned long long int var_19 = 56235693731059143ULL;
int var_20 = -645805861;
int var_21 = -1030199714;
long long int var_22 = -7391610836948246416LL;
void init() {
}

void checksum() {
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
