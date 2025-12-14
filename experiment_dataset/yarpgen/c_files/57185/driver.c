#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2687943623U;
_Bool var_2 = (_Bool)0;
long long int var_4 = -8325995534151258054LL;
int var_5 = 585611347;
long long int var_6 = 731921744523623785LL;
long long int var_7 = 8853846234468153733LL;
unsigned char var_8 = (unsigned char)25;
int var_9 = 971472688;
signed char var_12 = (signed char)-34;
short var_15 = (short)25631;
int zero = 0;
unsigned int var_16 = 657698577U;
int var_17 = -258386787;
unsigned long long int var_18 = 5155163162727879111ULL;
short var_19 = (short)-9048;
signed char var_20 = (signed char)32;
unsigned long long int var_21 = 11662494740227549193ULL;
unsigned long long int var_22 = 16959182378367498119ULL;
long long int var_23 = -7150869606122665030LL;
signed char var_24 = (signed char)-43;
int var_25 = 771640788;
long long int var_26 = -7334037559578466569LL;
unsigned char var_27 = (unsigned char)15;
unsigned char var_28 = (unsigned char)142;
short var_29 = (short)-9003;
long long int var_30 = -5893401948424905519LL;
long long int var_31 = 4922049031930261186LL;
signed char var_32 = (signed char)102;
unsigned long long int var_33 = 3958849511203495660ULL;
int var_34 = -739848759;
unsigned long long int var_35 = 2747555383994820513ULL;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
long long int var_38 = -3511777549427057653LL;
unsigned short var_39 = (unsigned short)65170;
unsigned long long int var_40 = 10843738195799645713ULL;
unsigned long long int var_41 = 15793535582709815885ULL;
long long int var_42 = 4070844309976968802LL;
signed char var_43 = (signed char)-71;
_Bool var_44 = (_Bool)0;
long long int var_45 = 5957050231491604720LL;
_Bool var_46 = (_Bool)0;
signed char var_47 = (signed char)84;
int arr_3 [25] [25] ;
int arr_10 [25] [25] [25] [25] [25] ;
int arr_17 [25] [25] ;
long long int arr_18 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_20 [25] [25] [25] [25] [25] ;
unsigned char arr_32 [25] ;
signed char arr_33 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1672966630;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 440008125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = -676912335;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8689309350454190705LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (signed char)10;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
