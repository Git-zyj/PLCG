#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)110;
int var_4 = -1244218251;
unsigned long long int var_5 = 1384164691154472980ULL;
long long int var_8 = -825630541253380090LL;
unsigned short var_10 = (unsigned short)23335;
unsigned long long int var_11 = 2695452129625095465ULL;
int var_14 = -414352284;
unsigned long long int var_15 = 90723152918446804ULL;
unsigned int var_17 = 2376022670U;
int zero = 0;
long long int var_19 = 5837751152557779864LL;
unsigned long long int var_20 = 4594791752737306108ULL;
long long int var_21 = 1132995847252118924LL;
long long int var_22 = 1740394674076394594LL;
unsigned long long int var_23 = 17569412819263794166ULL;
unsigned short var_24 = (unsigned short)53981;
unsigned long long int var_25 = 9858834644583389918ULL;
unsigned long long int var_26 = 6275592669548934891ULL;
unsigned int var_27 = 2502292570U;
unsigned long long int var_28 = 2483702582874476057ULL;
unsigned int var_29 = 2600872221U;
unsigned long long int var_30 = 65156353919623717ULL;
unsigned short var_31 = (unsigned short)64251;
unsigned long long int var_32 = 2786231369932321969ULL;
unsigned long long int var_33 = 4077849583983994326ULL;
signed char var_34 = (signed char)94;
unsigned long long int var_35 = 8370769410376873890ULL;
unsigned long long int var_36 = 13913350840683141245ULL;
unsigned short arr_0 [19] ;
unsigned short arr_1 [19] ;
signed char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] ;
signed char arr_4 [19] [19] ;
unsigned long long int arr_9 [19] ;
unsigned long long int arr_10 [19] [19] ;
unsigned long long int arr_14 [19] [19] [19] ;
unsigned int arr_15 [19] [19] [19] ;
long long int arr_16 [19] [19] [19] ;
short arr_19 [19] [19] ;
unsigned long long int arr_20 [19] [19] [19] [19] [19] ;
int arr_21 [19] [19] [19] [19] ;
unsigned int arr_22 [19] [19] [19] [19] ;
signed char arr_24 [11] ;
unsigned long long int arr_27 [11] [11] ;
long long int arr_29 [11] ;
unsigned short arr_5 [19] [19] ;
unsigned long long int arr_6 [19] ;
unsigned short arr_11 [19] [19] [19] ;
int arr_23 [19] [19] [19] [19] [19] [19] ;
long long int arr_32 [11] ;
_Bool arr_33 [11] ;
int arr_37 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)23789;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)3535;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 8733239709887738923ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 11339480230595983220ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 3776489474512043462ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1557839986057771442ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4175110900U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -6856228065457414316LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26490 : (short)-31280;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 7322917743735357669ULL : 11296748791543149841ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1301165094;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 2638600451U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_27 [i_0] [i_1] = 8853274465176292758ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = -5356198538870499144LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)26422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 9090559504683060195ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)38785;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1100898219 : 21066788;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_32 [i_0] = 6902519720628849374LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = -1500625232;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
