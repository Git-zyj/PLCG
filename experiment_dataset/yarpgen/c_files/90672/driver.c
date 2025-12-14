#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_1 = (unsigned char)111;
unsigned short var_2 = (unsigned short)10016;
unsigned long long int var_3 = 310529950228145145ULL;
unsigned long long int var_4 = 10158414976707486210ULL;
unsigned short var_5 = (unsigned short)30196;
unsigned short var_6 = (unsigned short)17434;
signed char var_7 = (signed char)113;
unsigned short var_8 = (unsigned short)27829;
int zero = 0;
int var_10 = -680951956;
long long int var_11 = -1556116249773195520LL;
long long int var_12 = -917694120383863910LL;
unsigned int var_13 = 2084853105U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
