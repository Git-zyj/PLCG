#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
int var_3 = -2056553576;
short var_4 = (short)15561;
unsigned int var_6 = 953667101U;
unsigned long long int var_7 = 8695815040005183256ULL;
int var_8 = -1275967361;
unsigned char var_9 = (unsigned char)136;
unsigned char var_10 = (unsigned char)92;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)53236;
int var_16 = 1875229835;
long long int var_17 = 5937494508970365397LL;
unsigned char var_19 = (unsigned char)223;
int zero = 0;
short var_20 = (short)22239;
unsigned int var_21 = 1360191742U;
unsigned char var_22 = (unsigned char)161;
unsigned int var_23 = 2171046995U;
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
