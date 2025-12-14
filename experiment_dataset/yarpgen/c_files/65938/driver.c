#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned short var_2 = (unsigned short)38742;
long long int var_5 = -8587377129719909391LL;
int var_7 = -474975414;
unsigned int var_8 = 1534908721U;
short var_10 = (short)24023;
unsigned short var_11 = (unsigned short)47030;
int zero = 0;
signed char var_13 = (signed char)-95;
short var_14 = (short)-17846;
unsigned long long int var_15 = 3184653561257497850ULL;
signed char var_16 = (signed char)38;
long long int var_17 = 3406382176327457628LL;
signed char var_18 = (signed char)81;
long long int var_19 = 7912420783480497762LL;
long long int var_20 = 1053674871199907232LL;
signed char var_21 = (signed char)54;
unsigned short var_22 = (unsigned short)50903;
long long int var_23 = -8119766260697076286LL;
short var_24 = (short)6110;
unsigned char var_25 = (unsigned char)134;
int var_26 = -165893972;
long long int var_27 = -9103728832015761359LL;
signed char arr_2 [10] ;
signed char arr_6 [10] ;
signed char arr_9 [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned char arr_11 [10] [10] [10] [10] ;
signed char arr_16 [10] [10] [10] [10] [10] [10] ;
short arr_23 [24] ;
signed char arr_20 [10] [10] [10] [10] [10] [10] [10] ;
unsigned int arr_21 [10] ;
unsigned long long int arr_26 [24] ;
unsigned short arr_27 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 17840042207466546024ULL : 1530758802158785374ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)50 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)-118 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (short)-4427;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)-57 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = 1091184797U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 13875180599276305219ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_27 [i_0] = (unsigned short)36437;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
