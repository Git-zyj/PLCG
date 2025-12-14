#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1341232033U;
unsigned short var_1 = (unsigned short)57426;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 15839320759041615877ULL;
long long int var_4 = -4064663968939731608LL;
unsigned short var_5 = (unsigned short)20082;
int var_7 = -517008478;
unsigned long long int var_8 = 12706775700966981523ULL;
unsigned int var_9 = 217042636U;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1443342737;
long long int var_13 = 6944011071083437351LL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)94;
unsigned long long int var_16 = 3405572787121177176ULL;
int var_17 = -1572608158;
long long int var_18 = 677471726361536519LL;
long long int var_19 = 4561080795418169138LL;
signed char var_20 = (signed char)3;
unsigned int var_21 = 2647371832U;
unsigned int var_22 = 1964959919U;
unsigned short var_23 = (unsigned short)17228;
unsigned char var_24 = (unsigned char)228;
short var_25 = (short)14006;
unsigned short var_26 = (unsigned short)3164;
_Bool var_27 = (_Bool)1;
short var_28 = (short)4125;
unsigned long long int var_29 = 12979514874951576939ULL;
signed char var_30 = (signed char)72;
unsigned short var_31 = (unsigned short)12395;
long long int var_32 = 9214959521585163982LL;
long long int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
signed char arr_6 [22] ;
signed char arr_15 [22] [22] [22] [22] ;
_Bool arr_18 [22] [22] [22] [22] [22] [22] [22] ;
short arr_20 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_28 [22] [22] [22] [22] [22] ;
signed char arr_43 [24] [24] ;
short arr_3 [18] ;
unsigned long long int arr_26 [22] [22] [22] ;
long long int arr_52 [24] [24] [24] [24] ;
unsigned long long int arr_53 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3330255646412886331LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)13766;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (short)10926 : (short)7916;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-20293;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 12660855902878104237ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2722114711748137849LL : -5455042233058773945LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_53 [i_0] = 14064539631330407742ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_52 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_53 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
