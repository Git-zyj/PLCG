#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4047346487U;
unsigned int var_1 = 2913279539U;
unsigned char var_3 = (unsigned char)192;
short var_4 = (short)-15352;
unsigned short var_5 = (unsigned short)9969;
long long int var_6 = 1253334987438328068LL;
unsigned int var_11 = 3024924200U;
short var_12 = (short)-2732;
unsigned char var_15 = (unsigned char)126;
unsigned short var_16 = (unsigned short)13514;
int zero = 0;
long long int var_18 = -7326362812324790519LL;
short var_19 = (short)17219;
unsigned char var_20 = (unsigned char)214;
unsigned int var_21 = 2385890110U;
signed char var_22 = (signed char)42;
unsigned int var_23 = 854349441U;
unsigned short var_24 = (unsigned short)61487;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)61796;
long long int var_27 = -3352302257407826851LL;
long long int var_28 = 2850674757297217332LL;
unsigned short var_29 = (unsigned short)33256;
unsigned char var_30 = (unsigned char)15;
unsigned int var_31 = 3728307302U;
int var_32 = -814196242;
unsigned char var_33 = (unsigned char)142;
unsigned short var_34 = (unsigned short)56896;
unsigned int var_35 = 444045002U;
unsigned short var_36 = (unsigned short)12682;
unsigned long long int var_37 = 13496711468173013642ULL;
long long int var_38 = -3458900258126025819LL;
unsigned int var_39 = 1445364240U;
signed char var_40 = (signed char)-8;
int var_41 = -1821916412;
signed char var_42 = (signed char)14;
signed char var_43 = (signed char)-4;
unsigned short arr_0 [19] ;
long long int arr_1 [19] ;
unsigned int arr_2 [15] ;
unsigned char arr_3 [15] ;
long long int arr_4 [15] ;
short arr_6 [15] [15] [15] ;
unsigned char arr_7 [15] [15] ;
unsigned int arr_8 [15] [15] [15] ;
long long int arr_9 [15] [15] [15] ;
long long int arr_10 [15] [15] ;
unsigned char arr_12 [15] [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] ;
unsigned short arr_15 [15] [15] [15] ;
unsigned char arr_16 [15] [15] [15] [15] [15] ;
_Bool arr_22 [15] [15] ;
unsigned int arr_26 [15] [15] [15] [15] ;
short arr_27 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)56875;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -8710385891057101376LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 692865944U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 929249397945141677LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)13062;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1487197267U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6521875058999234294LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = -3150409919614138918LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)3375;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 3535712829U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)27802;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
