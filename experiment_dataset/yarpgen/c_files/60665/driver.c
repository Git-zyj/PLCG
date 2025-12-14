#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15231;
short var_5 = (short)32419;
short var_9 = (short)26324;
signed char var_11 = (signed char)-52;
unsigned int var_13 = 3402170445U;
int var_14 = 1924990152;
int zero = 0;
long long int var_15 = 7939956205912362239LL;
long long int var_16 = 7495691946305747768LL;
int var_17 = 1683642767;
signed char var_18 = (signed char)52;
int var_19 = 1726099439;
_Bool var_20 = (_Bool)1;
short arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-15151;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
