#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1660914645;
unsigned char var_1 = (unsigned char)196;
signed char var_3 = (signed char)-103;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)15234;
unsigned short var_14 = (unsigned short)59325;
int zero = 0;
unsigned long long int var_19 = 7579262151599729240ULL;
short var_20 = (short)722;
short var_21 = (short)24907;
int var_22 = -1838598758;
int var_23 = -186821120;
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
