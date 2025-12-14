#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned char var_2 = (unsigned char)174;
unsigned char var_3 = (unsigned char)238;
unsigned long long int var_4 = 7423274680301449257ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -3169239440948188135LL;
unsigned int var_8 = 1685723827U;
unsigned short var_12 = (unsigned short)34023;
unsigned int var_13 = 1261960936U;
unsigned long long int var_14 = 11402247781497853764ULL;
int zero = 0;
int var_18 = -776481853;
short var_19 = (short)-10952;
unsigned int var_20 = 3122134608U;
unsigned char var_21 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
