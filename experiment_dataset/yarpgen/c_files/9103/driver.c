#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2295487775U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-23344;
unsigned int var_5 = 3128041558U;
unsigned int var_7 = 3234337947U;
signed char var_8 = (signed char)-31;
short var_9 = (short)-1507;
unsigned short var_10 = (unsigned short)32758;
unsigned long long int var_11 = 4796397495737477129ULL;
unsigned short var_12 = (unsigned short)62608;
unsigned short var_13 = (unsigned short)63547;
signed char var_14 = (signed char)70;
int var_15 = -1273455455;
unsigned short var_16 = (unsigned short)13590;
int zero = 0;
unsigned int var_17 = 27141406U;
signed char var_18 = (signed char)67;
unsigned char var_19 = (unsigned char)117;
signed char var_20 = (signed char)-94;
unsigned char var_21 = (unsigned char)24;
unsigned int var_22 = 469460379U;
unsigned long long int var_23 = 11697117970705024524ULL;
unsigned short var_24 = (unsigned short)41934;
unsigned int var_25 = 3492748808U;
unsigned char var_26 = (unsigned char)76;
long long int var_27 = 541414999682752631LL;
unsigned char var_28 = (unsigned char)10;
unsigned int var_29 = 350741541U;
long long int var_30 = -6423518694016186054LL;
unsigned char var_31 = (unsigned char)109;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-118;
int var_34 = 1775196452;
signed char var_35 = (signed char)-119;
signed char var_36 = (signed char)-13;
int var_37 = 474556511;
unsigned short var_38 = (unsigned short)59981;
signed char var_39 = (signed char)97;
int arr_0 [24] ;
unsigned int arr_1 [24] ;
long long int arr_2 [24] ;
unsigned short arr_4 [24] [24] ;
_Bool arr_6 [24] [24] ;
_Bool arr_8 [24] [24] [24] ;
unsigned short arr_9 [24] [24] ;
unsigned int arr_15 [25] ;
signed char arr_17 [25] [25] ;
short arr_21 [21] ;
unsigned long long int arr_22 [21] ;
signed char arr_28 [21] [21] [21] [21] ;
unsigned long long int arr_30 [21] [21] [21] [21] ;
unsigned char arr_31 [21] [21] [21] [21] [21] [21] ;
int arr_41 [20] ;
_Bool arr_5 [24] [24] ;
unsigned int arr_10 [24] [24] [24] ;
unsigned char arr_11 [24] [24] ;
long long int arr_18 [25] ;
signed char arr_35 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_42 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1764624430;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1919186225U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2024817645634390469LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)50070;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)61324 : (unsigned short)34506;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 2013847682U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (short)4704;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 15787295468473823988ULL : 5972039786261203536ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 6573238421734475996ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = 811413873;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1813654966U : 33814118U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)233 : (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8834719852588415447LL : 6494606525452121394LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)9 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = (unsigned short)49417;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
