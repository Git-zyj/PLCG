#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25306;
unsigned short var_4 = (unsigned short)47719;
unsigned short var_6 = (unsigned short)39331;
long long int var_7 = 6292333097838027191LL;
int zero = 0;
unsigned short var_17 = (unsigned short)28703;
unsigned short var_18 = (unsigned short)62967;
short var_19 = (short)-15703;
short var_20 = (short)9248;
unsigned short var_21 = (unsigned short)51840;
int var_22 = -123786479;
short var_23 = (short)21605;
long long int var_24 = -2647355312602715735LL;
unsigned short var_25 = (unsigned short)21468;
short var_26 = (short)-9305;
unsigned short var_27 = (unsigned short)28111;
unsigned short var_28 = (unsigned short)8112;
unsigned short var_29 = (unsigned short)18919;
int var_30 = 1716387265;
unsigned short var_31 = (unsigned short)37043;
unsigned short var_32 = (unsigned short)31613;
unsigned short var_33 = (unsigned short)58044;
unsigned short var_34 = (unsigned short)63936;
unsigned short var_35 = (unsigned short)6579;
long long int var_36 = 8765852254041689383LL;
long long int var_37 = -923566749828546607LL;
short var_38 = (short)-25998;
unsigned short var_39 = (unsigned short)53765;
long long int var_40 = 8744569064880071184LL;
int arr_0 [20] [20] ;
int arr_1 [20] [20] ;
long long int arr_2 [20] ;
long long int arr_3 [20] [20] [20] ;
short arr_4 [20] [20] [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned short arr_6 [15] ;
long long int arr_7 [15] ;
unsigned short arr_8 [15] ;
int arr_10 [15] ;
int arr_12 [15] [15] ;
short arr_18 [15] [15] [15] [15] [15] [15] ;
short arr_21 [18] ;
short arr_24 [20] ;
short arr_28 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1446348577;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1546993805;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -8116170942580710490LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5083694859356132574LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)4457;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 57118425767962704LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)62066;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2319955552159935110LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned short)5308;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -1346711818;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 1940657129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-16850;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (short)-7758;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (short)-8804;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (short)1179;
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
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
