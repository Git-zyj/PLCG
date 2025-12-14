#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2191012924662169839LL;
unsigned char var_1 = (unsigned char)145;
unsigned char var_2 = (unsigned char)230;
int var_3 = -1109072766;
unsigned int var_4 = 2147481750U;
int var_5 = -764125412;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)25023;
int zero = 0;
unsigned char var_11 = (unsigned char)19;
unsigned short var_12 = (unsigned short)65122;
unsigned char var_13 = (unsigned char)240;
unsigned char var_14 = (unsigned char)20;
unsigned int var_15 = 1670050180U;
unsigned int var_16 = 2543396465U;
signed char var_17 = (signed char)114;
int var_18 = -358148307;
int var_19 = -2012845128;
unsigned int var_20 = 2322131316U;
unsigned long long int var_21 = 16058624018626497427ULL;
signed char var_22 = (signed char)-83;
signed char var_23 = (signed char)-108;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1740655578U;
unsigned char var_26 = (unsigned char)233;
unsigned int var_27 = 3127335503U;
unsigned char var_28 = (unsigned char)205;
int var_29 = 1277991948;
unsigned int var_30 = 1709552459U;
unsigned char var_31 = (unsigned char)77;
unsigned char var_32 = (unsigned char)196;
unsigned short var_33 = (unsigned short)56244;
signed char var_34 = (signed char)0;
_Bool var_35 = (_Bool)1;
int var_36 = 180725893;
int var_37 = -495682655;
signed char var_38 = (signed char)-111;
int var_39 = -821896190;
unsigned int var_40 = 1413893006U;
unsigned int var_41 = 2204752180U;
signed char var_42 = (signed char)-48;
long long int var_43 = 1463912618698878026LL;
unsigned int var_44 = 17854389U;
unsigned int var_45 = 3113045148U;
_Bool var_46 = (_Bool)0;
signed char var_47 = (signed char)18;
signed char arr_0 [10] ;
unsigned int arr_1 [10] ;
_Bool arr_3 [10] [10] [10] ;
int arr_5 [10] [10] [10] [10] ;
unsigned int arr_6 [10] [10] ;
int arr_7 [10] [10] [10] [10] [10] ;
signed char arr_9 [10] [10] [10] [10] ;
unsigned char arr_11 [10] [10] [10] [10] [10] ;
int arr_13 [10] ;
int arr_14 [10] ;
unsigned short arr_15 [10] [10] ;
_Bool arr_16 [10] [10] [10] [10] ;
signed char arr_17 [10] [10] [10] [10] ;
unsigned char arr_18 [10] ;
unsigned short arr_23 [10] [10] [10] [10] ;
_Bool arr_25 [10] [10] [10] [10] [10] [10] ;
long long int arr_28 [10] [10] [10] [10] ;
unsigned short arr_33 [10] [10] [10] [10] [10] ;
int arr_35 [10] ;
unsigned long long int arr_38 [19] ;
unsigned char arr_39 [19] ;
unsigned long long int arr_40 [19] ;
long long int arr_2 [10] ;
signed char arr_36 [10] ;
unsigned long long int arr_37 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2127066991U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 517181241;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 1757635341U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = -121422158;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1466864867;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -927112435;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)52526;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64783;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -1892086781137222473LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)43516;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = -1524577794;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 5102029052075495761ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = 7026697522794576396ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 9149074587768716211LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_36 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = 15845778269083970869ULL;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
