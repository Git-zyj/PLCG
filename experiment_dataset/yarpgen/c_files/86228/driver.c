#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46253;
long long int var_4 = -2794893590174213696LL;
int var_7 = 1200162726;
_Bool var_14 = (_Bool)1;
unsigned short var_18 = (unsigned short)46546;
int zero = 0;
long long int var_19 = 5549844819665282715LL;
long long int var_20 = 4338746025707742686LL;
long long int var_21 = 3260405631233646256LL;
short var_22 = (short)4648;
unsigned short var_23 = (unsigned short)8028;
unsigned long long int var_24 = 11564188284192027868ULL;
unsigned char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)116;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
