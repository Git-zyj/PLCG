#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -241214066;
signed char var_3 = (signed char)-68;
unsigned short var_4 = (unsigned short)33474;
unsigned short var_5 = (unsigned short)35804;
unsigned int var_6 = 4212575537U;
signed char var_7 = (signed char)41;
unsigned long long int var_8 = 6908094428194882385ULL;
unsigned char var_9 = (unsigned char)114;
unsigned char var_10 = (unsigned char)227;
signed char var_11 = (signed char)29;
int var_12 = 1977995413;
unsigned char var_13 = (unsigned char)57;
int var_14 = -2125181367;
short var_15 = (short)-3670;
unsigned short var_16 = (unsigned short)48149;
unsigned int var_17 = 1864296910U;
unsigned char var_18 = (unsigned char)187;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5464381384360469025LL;
short var_21 = (short)-28541;
short var_22 = (short)-17140;
unsigned short var_23 = (unsigned short)46328;
signed char var_24 = (signed char)-44;
unsigned long long int var_25 = 13874749285846676584ULL;
unsigned int var_26 = 2013794648U;
long long int var_27 = 7275597576748676367LL;
unsigned short var_28 = (unsigned short)50296;
int var_29 = 430829852;
short var_30 = (short)-20410;
unsigned short var_31 = (unsigned short)543;
unsigned char var_32 = (unsigned char)106;
int var_33 = -307744367;
unsigned short var_34 = (unsigned short)52191;
short var_35 = (short)-21652;
long long int var_36 = -167148259230378050LL;
unsigned int var_37 = 1630393791U;
int var_38 = -1041231484;
signed char var_39 = (signed char)32;
long long int var_40 = 4483166360890145423LL;
short var_41 = (short)-4608;
unsigned char var_42 = (unsigned char)61;
unsigned char var_43 = (unsigned char)236;
int var_44 = -1170412669;
long long int arr_0 [17] ;
signed char arr_1 [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_4 [17] ;
unsigned char arr_5 [12] [12] ;
int arr_7 [12] [12] ;
short arr_8 [12] ;
unsigned short arr_9 [12] [12] [12] [12] ;
int arr_10 [12] [12] [12] ;
long long int arr_11 [12] [12] [12] [12] ;
unsigned char arr_12 [12] [12] [12] [12] ;
signed char arr_15 [12] [12] [12] [12] ;
long long int arr_16 [12] ;
long long int arr_17 [12] [12] ;
_Bool arr_19 [12] [12] [12] [12] [12] [12] ;
long long int arr_20 [12] [12] ;
_Bool arr_21 [12] [12] [12] [12] [12] [12] ;
_Bool arr_28 [12] [12] [12] [12] ;
unsigned char arr_37 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -316894643844414982LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)34279;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 1769751006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)26690;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31590;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1787657084;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 940008140088404536LL : -3795677810844895391LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-9 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 7751195207988154080LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 119726659339591613LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 7660542467771429752LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)72;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
