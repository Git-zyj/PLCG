#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_1 = 14563310769661021473ULL;
short var_2 = (short)14205;
signed char var_3 = (signed char)-1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1595526950U;
unsigned char var_6 = (unsigned char)92;
unsigned int var_7 = 255563963U;
unsigned int var_9 = 1892879609U;
unsigned long long int var_10 = 15912512802012084769ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53040;
long long int var_12 = 7337341443449348802LL;
unsigned short var_13 = (unsigned short)44884;
int var_14 = 143941827;
void init() {
}

void checksum() {
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
