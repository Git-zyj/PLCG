#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32656;
long long int var_1 = -2587188237841800261LL;
int var_2 = 599876913;
unsigned char var_3 = (unsigned char)9;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3276205517U;
unsigned char var_6 = (unsigned char)165;
long long int var_7 = -8082375696740816684LL;
long long int var_8 = -701779833738312775LL;
unsigned char var_9 = (unsigned char)28;
unsigned long long int var_10 = 2691257794076913785ULL;
short var_12 = (short)-15304;
int zero = 0;
unsigned int var_13 = 463377530U;
unsigned char var_14 = (unsigned char)33;
unsigned int var_15 = 245078928U;
unsigned long long int var_16 = 13985284547187821544ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1436451336U;
short var_19 = (short)57;
short var_20 = (short)-26104;
int var_21 = -197804317;
unsigned long long int var_22 = 13147474367135314878ULL;
signed char var_23 = (signed char)-1;
long long int var_24 = 747204347312081689LL;
unsigned char var_25 = (unsigned char)162;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-8012;
short var_28 = (short)-1202;
unsigned int var_29 = 2295318905U;
int var_30 = 1957920390;
signed char var_31 = (signed char)-31;
unsigned short var_32 = (unsigned short)12531;
int var_33 = -1111602444;
unsigned int var_34 = 393671200U;
int var_35 = 639493455;
long long int var_36 = -7224729289445748245LL;
unsigned char var_37 = (unsigned char)65;
unsigned char var_38 = (unsigned char)170;
unsigned char var_39 = (unsigned char)120;
signed char var_40 = (signed char)-79;
unsigned int var_41 = 3925407711U;
unsigned char var_42 = (unsigned char)158;
_Bool var_43 = (_Bool)0;
_Bool var_44 = (_Bool)0;
int var_45 = 2098680475;
unsigned int var_46 = 1256606891U;
int var_47 = -1591429055;
long long int var_48 = -5827166946284185624LL;
unsigned char var_49 = (unsigned char)150;
_Bool var_50 = (_Bool)1;
unsigned int var_51 = 3005007767U;
long long int var_52 = 7601101581128757681LL;
unsigned char var_53 = (unsigned char)232;
unsigned int var_54 = 1804367545U;
short var_55 = (short)14772;
unsigned int var_56 = 2059740653U;
short arr_1 [20] [20] ;
unsigned char arr_2 [20] [20] ;
_Bool arr_3 [20] [20] ;
unsigned long long int arr_10 [20] ;
signed char arr_12 [20] [20] [20] [20] ;
long long int arr_14 [20] [20] [20] [20] [20] [20] ;
long long int arr_19 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_23 [17] ;
signed char arr_24 [17] ;
int arr_29 [17] [17] [17] [17] [17] [17] ;
long long int arr_32 [17] [17] ;
unsigned char arr_37 [17] [17] [17] [17] ;
unsigned int arr_38 [17] [17] [17] [17] [17] [17] ;
short arr_47 [17] [17] ;
unsigned int arr_48 [17] ;
unsigned char arr_58 [17] [17] [17] [17] ;
unsigned char arr_63 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-2336;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3403034308178058155ULL : 5964673199492959198ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2355389759957135530LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -150178224701330633LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -796340855;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_32 [i_0] [i_1] = -5661764327978693452LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 3123891097U : 837873163U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_47 [i_0] [i_1] = (short)15786;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = 1902569428U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_63 [i_0] [i_1] = (unsigned char)14;
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
