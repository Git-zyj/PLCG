#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
short var_2 = (short)-7615;
long long int var_5 = 895353355660923763LL;
signed char var_6 = (signed char)116;
int var_7 = -379649282;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_14 = 1830095045;
int zero = 0;
short var_16 = (short)26404;
unsigned long long int var_17 = 691013524706106685ULL;
long long int var_18 = 6383086533105122640LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1294736163670333333LL;
short var_21 = (short)27031;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-7;
unsigned int var_24 = 1192569541U;
unsigned int arr_0 [13] ;
int arr_4 [13] ;
long long int arr_6 [13] [13] [13] ;
unsigned int arr_7 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2119048914U : 1866836298U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 433808483;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 9045340544105558490LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1340447329U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
