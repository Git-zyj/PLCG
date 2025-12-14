#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)60;
int var_4 = 424665889;
signed char var_5 = (signed char)6;
unsigned long long int var_7 = 10361911327833508773ULL;
int var_9 = -1865081490;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 684490336807639689ULL;
unsigned short var_15 = (unsigned short)38875;
int zero = 0;
long long int var_16 = -6822601297175489574LL;
int var_17 = 2071912601;
unsigned char var_18 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
