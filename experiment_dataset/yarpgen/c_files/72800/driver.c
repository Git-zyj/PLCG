#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned int var_1 = 4060414041U;
short var_2 = (short)19857;
short var_3 = (short)-1303;
short var_4 = (short)18463;
unsigned int var_5 = 78220352U;
unsigned long long int var_6 = 11574895386907275174ULL;
unsigned int var_7 = 352665110U;
short var_8 = (short)26009;
long long int var_9 = -7047433334689986570LL;
short var_10 = (short)23499;
unsigned int var_11 = 3267595177U;
unsigned long long int var_12 = 14046501671091247384ULL;
long long int var_13 = -7479264356446610585LL;
int zero = 0;
unsigned short var_15 = (unsigned short)37806;
long long int var_16 = -6254698931563329133LL;
unsigned short var_17 = (unsigned short)59571;
int var_18 = -475454344;
unsigned long long int var_19 = 15724993313972538445ULL;
signed char var_20 = (signed char)68;
signed char var_21 = (signed char)82;
int var_22 = -844794420;
signed char var_23 = (signed char)82;
long long int var_24 = -5038999530307390389LL;
unsigned int var_25 = 2018625460U;
short var_26 = (short)17793;
int var_27 = -40816220;
unsigned long long int var_28 = 7769499976520808043ULL;
short var_29 = (short)-2252;
long long int var_30 = -7282203758876952789LL;
unsigned short var_31 = (unsigned short)7963;
short var_32 = (short)-2810;
unsigned char var_33 = (unsigned char)83;
long long int var_34 = -5082728379291878014LL;
short var_35 = (short)-11328;
unsigned int var_36 = 1727828973U;
unsigned int var_37 = 2463966711U;
long long int var_38 = 4132671725602768981LL;
signed char var_39 = (signed char)108;
unsigned char var_40 = (unsigned char)79;
signed char var_41 = (signed char)52;
_Bool var_42 = (_Bool)0;
unsigned int var_43 = 305358019U;
long long int var_44 = 8430277666441514100LL;
signed char var_45 = (signed char)1;
unsigned short var_46 = (unsigned short)47122;
unsigned short var_47 = (unsigned short)50781;
int var_48 = 1961778291;
unsigned short var_49 = (unsigned short)36636;
int var_50 = -1786733077;
short var_51 = (short)1541;
unsigned short var_52 = (unsigned short)12013;
unsigned char var_53 = (unsigned char)107;
short var_54 = (short)20381;
_Bool var_55 = (_Bool)1;
long long int var_56 = 9170905696104441050LL;
long long int var_57 = 5545401365786091663LL;
int arr_5 [16] [16] [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
unsigned int arr_10 [16] [16] [16] [16] [16] [16] ;
long long int arr_17 [19] [19] ;
signed char arr_18 [19] ;
unsigned char arr_19 [19] [19] ;
long long int arr_20 [19] ;
signed char arr_21 [19] [19] [19] ;
unsigned long long int arr_22 [19] [19] ;
unsigned char arr_33 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 782084804;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2132818403U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = -9046382301468052311LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 6152962771863179314LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = 11043587794139375749ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)163;
}

void checksum() {
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
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
