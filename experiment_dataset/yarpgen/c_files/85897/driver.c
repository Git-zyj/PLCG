#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 11720004952575433062ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)166;
unsigned int var_7 = 1466045277U;
int var_8 = -1015472219;
int var_9 = 354278082;
short var_11 = (short)20233;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1100673140329387622ULL;
signed char var_14 = (signed char)-4;
int zero = 0;
int var_15 = 1563226116;
long long int var_16 = -448107180753781453LL;
unsigned char var_17 = (unsigned char)129;
long long int var_18 = -6924584068514411441LL;
unsigned char var_19 = (unsigned char)236;
unsigned char var_20 = (unsigned char)161;
int var_21 = 1657220729;
unsigned char var_22 = (unsigned char)157;
long long int var_23 = -1202022616617311729LL;
unsigned long long int var_24 = 8352522263274046102ULL;
unsigned long long int var_25 = 12847017245932342166ULL;
signed char var_26 = (signed char)-62;
unsigned int var_27 = 1286534441U;
long long int var_28 = 4824040637326056042LL;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 4230924757U;
signed char var_31 = (signed char)-20;
_Bool var_32 = (_Bool)1;
unsigned long long int var_33 = 6066357919640720833ULL;
unsigned long long int var_34 = 5446619177194893805ULL;
int var_35 = 1356443676;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)0;
unsigned long long int var_38 = 17163630401760527941ULL;
short var_39 = (short)18342;
unsigned char var_40 = (unsigned char)1;
_Bool var_41 = (_Bool)1;
long long int var_42 = -4655015618730359433LL;
unsigned int var_43 = 2446495350U;
unsigned short var_44 = (unsigned short)38602;
int var_45 = 1064292444;
unsigned short var_46 = (unsigned short)64625;
int var_47 = -2102476900;
unsigned long long int var_48 = 3897925985327227360ULL;
signed char var_49 = (signed char)12;
_Bool var_50 = (_Bool)0;
unsigned short var_51 = (unsigned short)30416;
int var_52 = -944086454;
unsigned long long int arr_0 [23] [23] ;
unsigned char arr_2 [23] [23] ;
int arr_3 [23] ;
signed char arr_4 [23] ;
short arr_5 [23] ;
unsigned long long int arr_6 [23] ;
short arr_7 [23] ;
unsigned char arr_15 [23] [23] [23] [23] [23] ;
_Bool arr_18 [23] [23] ;
long long int arr_20 [23] [23] [23] [23] ;
unsigned char arr_23 [23] [23] ;
unsigned long long int arr_28 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_32 [23] [23] [23] [23] ;
unsigned long long int arr_33 [23] [23] [23] [23] ;
unsigned long long int arr_35 [23] [23] [23] ;
signed char arr_41 [23] [23] [23] [23] [23] [23] [23] ;
int arr_46 [23] [23] ;
short arr_53 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 425979376775134254ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 499430860;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-28115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2388018650534490733ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-25240;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -6182795726392261365LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 12434085056809735490ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 11633131241799583066ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 6880037609695572034ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 10190457222570672193ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_46 [i_0] [i_1] = 801074893;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (short)-15974;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
