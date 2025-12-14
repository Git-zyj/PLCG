#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
unsigned long long int var_1 = 7863903975476128578ULL;
int var_2 = -2018166200;
short var_6 = (short)-13492;
unsigned short var_7 = (unsigned short)38905;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)112;
unsigned short var_11 = (unsigned short)2855;
unsigned char var_12 = (unsigned char)225;
long long int var_13 = 1386210906279321729LL;
int var_14 = 1268830760;
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
