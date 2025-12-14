#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -182309225;
unsigned short var_1 = (unsigned short)32690;
unsigned int var_2 = 3435847466U;
unsigned long long int var_3 = 7184992852298499285ULL;
signed char var_4 = (signed char)54;
unsigned long long int var_5 = 9560182981185180792ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3816455813718216176ULL;
int var_8 = -1558044806;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
unsigned char var_10 = (unsigned char)105;
long long int var_11 = 5348737413634171717LL;
int var_12 = 1449301762;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
