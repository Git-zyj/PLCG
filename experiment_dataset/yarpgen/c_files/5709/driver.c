#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned int var_4 = 428879656U;
long long int var_5 = -6793858647788777294LL;
signed char var_6 = (signed char)87;
long long int var_7 = 4133536935472379279LL;
unsigned long long int var_10 = 2657684617386420721ULL;
int var_11 = -1586990790;
unsigned long long int var_13 = 10285849968009903459ULL;
short var_14 = (short)-454;
int var_15 = 913242358;
unsigned short var_16 = (unsigned short)42950;
unsigned char var_17 = (unsigned char)40;
unsigned long long int var_18 = 14900912521852713131ULL;
int zero = 0;
int var_19 = -127367789;
short var_20 = (short)-1263;
unsigned long long int var_21 = 2463362880535436970ULL;
unsigned long long int var_22 = 15894549227963303490ULL;
long long int var_23 = 5770551771465341304LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
