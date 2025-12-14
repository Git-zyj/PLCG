#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -337068018;
signed char var_9 = (signed char)-84;
int var_10 = 1262426339;
short var_14 = (short)13657;
short var_18 = (short)13608;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -609573710;
unsigned char var_22 = (unsigned char)97;
signed char var_23 = (signed char)-46;
unsigned char var_24 = (unsigned char)74;
short var_25 = (short)11808;
unsigned short arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30408 : (unsigned short)32546;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
