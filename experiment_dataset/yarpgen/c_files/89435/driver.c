#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 906118349U;
unsigned int var_1 = 1870542767U;
unsigned int var_2 = 463007808U;
unsigned short var_4 = (unsigned short)35436;
unsigned short var_5 = (unsigned short)39463;
unsigned int var_6 = 2035433213U;
long long int var_8 = -5474462423297977096LL;
unsigned short var_9 = (unsigned short)28962;
short var_10 = (short)-4668;
long long int var_11 = 2865203510374201651LL;
unsigned int var_12 = 3033400273U;
unsigned short var_15 = (unsigned short)46336;
unsigned short var_16 = (unsigned short)8177;
int zero = 0;
unsigned short var_17 = (unsigned short)50132;
unsigned int var_18 = 2988602790U;
long long int var_19 = 9060315044024272675LL;
unsigned short var_20 = (unsigned short)10857;
int var_21 = -1447497426;
unsigned short var_22 = (unsigned short)23676;
int var_23 = -515764938;
unsigned short var_24 = (unsigned short)37078;
long long int var_25 = 6860308731690137164LL;
unsigned short var_26 = (unsigned short)15694;
unsigned int var_27 = 3785445969U;
unsigned short var_28 = (unsigned short)53988;
unsigned int arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
int arr_6 [14] ;
unsigned int arr_10 [17] ;
unsigned short arr_14 [17] [17] ;
short arr_3 [14] ;
short arr_8 [14] [14] ;
unsigned short arr_9 [14] ;
int arr_15 [17] [17] ;
int arr_16 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2679042133U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -4337115535603971215LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)26034;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)62207;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -843611069;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1894247379U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)44264;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)22249 : (short)29160;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-4421;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)11449;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 1094859713;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = -1518700347;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
