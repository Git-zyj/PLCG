#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25169;
unsigned short var_1 = (unsigned short)4914;
short var_2 = (short)-11868;
short var_3 = (short)17168;
unsigned char var_4 = (unsigned char)30;
unsigned char var_5 = (unsigned char)163;
short var_6 = (short)-26402;
long long int var_7 = -897578733080901658LL;
unsigned short var_9 = (unsigned short)59785;
_Bool var_10 = (_Bool)1;
int var_11 = -911260723;
int zero = 0;
long long int var_12 = 5687473534024488827LL;
unsigned char var_13 = (unsigned char)161;
unsigned int var_14 = 1604284022U;
unsigned long long int var_15 = 3484153805218586762ULL;
short var_16 = (short)-430;
long long int var_17 = -4299278181667512820LL;
unsigned char var_18 = (unsigned char)199;
unsigned long long int var_19 = 18212065828369101144ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)30384;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)11;
long long int var_24 = -4224811108435818110LL;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)24920;
_Bool var_28 = (_Bool)1;
long long int var_29 = 8071580087091976385LL;
short var_30 = (short)-2734;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)12;
unsigned short var_34 = (unsigned short)10136;
long long int var_35 = -4528545658587435937LL;
long long int var_36 = 8899553991343997502LL;
unsigned short var_37 = (unsigned short)20161;
unsigned long long int arr_11 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1215348680017404232ULL : 1523603271203194410ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
