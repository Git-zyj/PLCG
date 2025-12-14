#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11947756593590425709ULL;
unsigned int var_1 = 2190212225U;
short var_3 = (short)13931;
unsigned char var_5 = (unsigned char)36;
unsigned long long int var_8 = 7037805181152616632ULL;
short var_9 = (short)-11015;
signed char var_11 = (signed char)-53;
unsigned char var_13 = (unsigned char)234;
short var_16 = (short)-29558;
unsigned long long int var_17 = 5408770664918893472ULL;
signed char var_18 = (signed char)-40;
int zero = 0;
short var_19 = (short)-14064;
unsigned long long int var_20 = 7099295302020265977ULL;
unsigned short var_21 = (unsigned short)13222;
unsigned long long int var_22 = 10584665032350987901ULL;
unsigned short var_23 = (unsigned short)52028;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)94;
unsigned char var_26 = (unsigned char)106;
unsigned char var_27 = (unsigned char)47;
short var_28 = (short)-23353;
signed char var_29 = (signed char)21;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)189;
unsigned char var_32 = (unsigned char)95;
long long int var_33 = -7719659644029997817LL;
signed char var_34 = (signed char)97;
unsigned long long int arr_0 [18] ;
signed char arr_1 [18] ;
unsigned long long int arr_7 [22] [22] ;
unsigned int arr_9 [22] [22] ;
unsigned long long int arr_11 [22] ;
unsigned char arr_13 [22] ;
unsigned short arr_15 [22] ;
signed char arr_16 [22] [22] [22] ;
unsigned long long int arr_17 [22] [22] [22] ;
signed char arr_19 [22] [22] ;
unsigned char arr_25 [22] [22] ;
unsigned int arr_30 [22] [22] [22] [22] [22] [22] ;
short arr_4 [18] [18] ;
unsigned char arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
_Bool arr_10 [22] ;
_Bool arr_14 [22] ;
short arr_18 [22] [22] [22] ;
short arr_27 [22] ;
long long int arr_36 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1798445786661201365ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 17395487651027264148ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 870376671U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 7968484107094139592ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)25999;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16550599153759752079ULL : 8165160215480538457ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 717680966U : 3259254561U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)29571;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)48395;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-3221 : (short)25807;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (short)25168;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = -5823949277125676882LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
