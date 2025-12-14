#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)184;
unsigned char var_7 = (unsigned char)216;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)11013;
signed char var_11 = (signed char)-99;
unsigned long long int var_14 = 3404238239379180140ULL;
int zero = 0;
unsigned long long int var_20 = 6994217182271394751ULL;
unsigned int var_21 = 3493662375U;
unsigned char var_22 = (unsigned char)228;
unsigned int var_23 = 278236359U;
unsigned int var_24 = 738142235U;
_Bool var_25 = (_Bool)0;
int var_26 = 140814380;
unsigned char var_27 = (unsigned char)24;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)123;
unsigned int var_30 = 1265292250U;
unsigned char var_31 = (unsigned char)18;
signed char var_32 = (signed char)77;
signed char var_33 = (signed char)-30;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 4242862939U;
long long int var_36 = -9190804106035806768LL;
signed char var_37 = (signed char)-59;
signed char var_38 = (signed char)41;
signed char var_39 = (signed char)-104;
unsigned char arr_0 [25] ;
long long int arr_1 [25] ;
_Bool arr_2 [10] [10] ;
long long int arr_3 [10] ;
long long int arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
long long int arr_7 [10] [10] [10] ;
unsigned short arr_8 [10] ;
unsigned long long int arr_9 [10] [10] ;
long long int arr_12 [10] [10] [10] [10] [10] [10] [10] ;
long long int arr_13 [10] [10] [10] [10] [10] [10] ;
long long int arr_14 [10] [10] [10] ;
long long int arr_16 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2811851533052433966LL : 5550238717895903815LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 6537432194446212693LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 5714991085209864476LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10699075624870816674ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9220528223685729458LL : -1630892836653448906LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)35775;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 16404920749092602503ULL : 1190242284585188845ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -6836659002815020168LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1227274129396349633LL : -5346176511103203716LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 120920287232098494LL : 2205598863197699756LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 5155617776494032694LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
