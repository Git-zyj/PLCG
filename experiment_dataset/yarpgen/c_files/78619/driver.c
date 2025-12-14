#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6737247530557378094ULL;
unsigned short var_1 = (unsigned short)8810;
unsigned long long int var_2 = 2384799163699415019ULL;
signed char var_3 = (signed char)-4;
signed char var_4 = (signed char)27;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5776794601113269720ULL;
long long int var_7 = 8525583240009677379LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 11188617589367758998ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)32;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)65;
unsigned int var_15 = 1905314873U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
