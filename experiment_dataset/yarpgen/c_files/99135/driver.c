#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27675;
unsigned long long int var_1 = 12200740535246684441ULL;
long long int var_3 = 6055749553156912349LL;
int var_6 = -1189657394;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)50;
int var_14 = -776375179;
unsigned char var_15 = (unsigned char)34;
unsigned short var_17 = (unsigned short)52450;
long long int var_18 = -9024834767095770287LL;
unsigned char var_19 = (unsigned char)170;
int zero = 0;
unsigned long long int var_20 = 3636141068928115338ULL;
short var_21 = (short)3554;
_Bool var_22 = (_Bool)1;
long long int var_23 = -5961969789567208994LL;
void init() {
}

void checksum() {
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
