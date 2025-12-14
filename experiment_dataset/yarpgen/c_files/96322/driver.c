#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23398;
long long int var_1 = -7579145749208238124LL;
unsigned int var_2 = 356113925U;
long long int var_4 = -1611945113553480016LL;
int var_5 = 293707004;
int var_6 = 131659907;
signed char var_7 = (signed char)-95;
int var_8 = -1180016109;
short var_9 = (short)-29010;
long long int var_10 = 1943353579358920154LL;
short var_11 = (short)24264;
int var_12 = 838236865;
long long int var_14 = 7636554362674099911LL;
long long int var_15 = -4824373892094733552LL;
int zero = 0;
short var_16 = (short)31500;
signed char var_17 = (signed char)85;
short var_18 = (short)15132;
short var_19 = (short)32191;
int var_20 = -2094551720;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-4705;
short var_23 = (short)14421;
unsigned int var_24 = 4031497671U;
short var_25 = (short)2192;
long long int var_26 = -645625651692571898LL;
int var_27 = -96400950;
short arr_3 [12] [12] [12] ;
short arr_6 [12] ;
short arr_7 [12] [12] [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] [12] ;
_Bool arr_10 [12] [12] [12] [12] ;
signed char arr_12 [12] [12] [12] ;
short arr_15 [12] [12] [12] ;
short arr_19 [12] [12] ;
unsigned int arr_21 [12] [12] [12] ;
int arr_13 [12] [12] [12] ;
int arr_14 [12] ;
short arr_22 [12] ;
int arr_23 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)18713 : (short)-30360;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)6128;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)30747 : (short)-3363;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -1480551562;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-29144;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-28143 : (short)5217;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2164298749U : 1916240449U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2105540819 : 1647189754;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -1604942151 : -1880271748;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (short)10970;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_23 [i_0] = -1907456643;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
