#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -910211037;
unsigned int var_2 = 1664557009U;
long long int var_4 = -3183445769886716215LL;
signed char var_7 = (signed char)95;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)38;
int var_18 = -2535745;
int zero = 0;
long long int var_19 = 9168763918939688169LL;
unsigned char var_20 = (unsigned char)76;
int var_21 = 1684520139;
int var_22 = 196402536;
_Bool var_23 = (_Bool)0;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)93 : (unsigned char)90;
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
