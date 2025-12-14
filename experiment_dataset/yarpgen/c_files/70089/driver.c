#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 3079677798U;
unsigned int var_19 = 1963055377U;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)351;
_Bool var_22 = (_Bool)0;
int var_23 = 1215318730;
unsigned long long int var_24 = 14885925927738059339ULL;
unsigned short var_25 = (unsigned short)12102;
short var_26 = (short)-14070;
unsigned char var_27 = (unsigned char)50;
long long int arr_0 [25] [25] ;
int arr_1 [25] ;
long long int arr_2 [25] ;
unsigned short arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -3180352543247331006LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1315773594;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -8697248214456265720LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)47745;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
