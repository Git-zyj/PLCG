#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-12339;
signed char var_9 = (signed char)15;
unsigned long long int var_12 = 15152148451481656001ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)56;
long long int var_16 = 2038836983934855597LL;
int zero = 0;
int var_19 = 1028292218;
signed char var_20 = (signed char)-49;
unsigned char var_21 = (unsigned char)173;
int var_22 = -1785630154;
short var_23 = (short)14356;
signed char var_24 = (signed char)-72;
long long int var_25 = 7946157298946315516LL;
unsigned int var_26 = 4260781093U;
unsigned char var_27 = (unsigned char)110;
unsigned long long int var_28 = 17078913767160009719ULL;
unsigned int var_29 = 4074239537U;
_Bool var_30 = (_Bool)1;
int var_31 = 1812398578;
long long int var_32 = 2019050083268397689LL;
signed char var_33 = (signed char)77;
unsigned long long int var_34 = 2186326801374592616ULL;
signed char var_35 = (signed char)88;
long long int var_36 = -8730713062488205439LL;
long long int var_37 = 1254979410885692706LL;
long long int var_38 = 7948327991024968617LL;
unsigned int var_39 = 3663442292U;
int var_40 = -1467048403;
short var_41 = (short)18318;
unsigned int var_42 = 170185882U;
long long int var_43 = -4483491417669832159LL;
short var_44 = (short)24450;
short var_45 = (short)11573;
signed char var_46 = (signed char)47;
unsigned long long int var_47 = 15450905130917212998ULL;
int var_48 = -1913742352;
unsigned char var_49 = (unsigned char)48;
unsigned char var_50 = (unsigned char)179;
short var_51 = (short)21531;
long long int var_52 = 5356866723209429980LL;
long long int var_53 = 7822969384798841604LL;
short var_54 = (short)31327;
long long int var_55 = 2833019222909303717LL;
unsigned int var_56 = 1081456553U;
_Bool arr_2 [10] ;
_Bool arr_3 [14] ;
unsigned long long int arr_4 [14] ;
long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] [14] ;
_Bool arr_7 [14] ;
int arr_8 [14] ;
unsigned int arr_9 [14] [14] ;
long long int arr_10 [14] [14] ;
int arr_11 [14] ;
int arr_14 [14] [14] ;
signed char arr_16 [14] ;
signed char arr_17 [14] ;
unsigned int arr_18 [14] [14] ;
unsigned char arr_19 [14] [14] [14] [14] ;
short arr_21 [14] [14] ;
long long int arr_22 [14] [14] [14] ;
signed char arr_25 [14] [14] [14] ;
unsigned long long int arr_26 [14] [14] [14] [14] [14] ;
int arr_28 [14] [14] [14] [14] [14] ;
unsigned long long int arr_30 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 11648275696609994798ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2537673962286809648LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3944487429882496454ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1887648395;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 3391547525U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = -2082147388765554299LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -555027802;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 452749995;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = 1461966966U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (short)24074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -6920028629065660398LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2310211421496727035ULL : 17060662914632635087ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1561705148 : 829434175;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10652234996143694930ULL : 9500633258080415399ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
