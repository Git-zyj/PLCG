#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
short var_1 = (short)7075;
unsigned long long int var_2 = 1130772440502804705ULL;
int var_3 = -58087023;
unsigned long long int var_4 = 58432687736097913ULL;
unsigned char var_5 = (unsigned char)7;
unsigned short var_6 = (unsigned short)60724;
int var_7 = -1294910149;
int var_8 = -1059116664;
signed char var_9 = (signed char)119;
short var_10 = (short)-22059;
int var_11 = -1848226040;
unsigned char var_12 = (unsigned char)126;
int var_13 = 376888355;
int var_14 = -885419483;
short var_15 = (short)-18165;
int zero = 0;
int var_16 = -1842865441;
short var_17 = (short)-13742;
int var_18 = 1392614145;
signed char var_19 = (signed char)72;
unsigned short var_20 = (unsigned short)63470;
unsigned short var_21 = (unsigned short)53803;
int var_22 = -1330529626;
unsigned long long int var_23 = 14187822452433516927ULL;
unsigned char var_24 = (unsigned char)20;
int var_25 = 1721511320;
int var_26 = 1842749854;
short var_27 = (short)30170;
int var_28 = -213290978;
unsigned long long int var_29 = 2810773740296076845ULL;
int var_30 = 1666192791;
signed char var_31 = (signed char)57;
signed char var_32 = (signed char)78;
unsigned char var_33 = (unsigned char)11;
int var_34 = 1670985883;
unsigned short var_35 = (unsigned short)36292;
unsigned long long int var_36 = 8947348141078100239ULL;
int var_37 = -1904539838;
unsigned short var_38 = (unsigned short)41392;
int var_39 = 1489774773;
int var_40 = -1565622996;
int var_41 = -2050134543;
int var_42 = -39595940;
unsigned char var_43 = (unsigned char)19;
unsigned char var_44 = (unsigned char)108;
int var_45 = -1096310804;
signed char var_46 = (signed char)112;
int var_47 = -1491027216;
short var_48 = (short)18998;
int var_49 = 2094813154;
unsigned short var_50 = (unsigned short)44803;
unsigned short arr_1 [18] [18] ;
unsigned short arr_2 [18] ;
unsigned short arr_3 [18] ;
unsigned short arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
unsigned char arr_7 [18] [18] ;
int arr_9 [18] [18] [18] ;
unsigned long long int arr_11 [18] [18] [18] [18] ;
short arr_13 [18] [18] [18] ;
int arr_14 [18] [18] ;
unsigned short arr_21 [18] [18] [18] [18] ;
signed char arr_27 [18] [18] [18] [18] ;
int arr_36 [18] [18] [18] ;
int arr_39 [18] ;
int arr_40 [18] [18] [18] [18] ;
unsigned char arr_49 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)13341;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)55089;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)15191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)10051;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)15957;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1917861608;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 4048620735410723522ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)31064 : (short)16979;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = -1836846090;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41436;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -2079525030;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = -1578934740;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = -85480136;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_49 [i_0] = (unsigned char)47;
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
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
