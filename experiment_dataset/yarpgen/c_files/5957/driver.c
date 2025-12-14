#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2069262087;
long long int var_3 = 8427385753509503005LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)37252;
unsigned long long int var_7 = 13781694853829589473ULL;
short var_8 = (short)-5197;
unsigned long long int var_9 = 13302035054096696370ULL;
signed char var_10 = (signed char)4;
long long int var_11 = 5910287801811754350LL;
signed char var_13 = (signed char)-1;
unsigned short var_14 = (unsigned short)56500;
unsigned short var_15 = (unsigned short)21690;
int zero = 0;
unsigned char var_16 = (unsigned char)54;
unsigned char var_17 = (unsigned char)39;
long long int var_18 = 6946872155481889919LL;
signed char var_19 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
