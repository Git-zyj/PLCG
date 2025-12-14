#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_11 = (unsigned char)43;
unsigned short var_12 = (unsigned short)7867;
long long int var_13 = -4113332987782843607LL;
long long int var_14 = -5629755944044085795LL;
unsigned long long int var_15 = 5482652769389868942ULL;
long long int var_16 = -1630749237434236613LL;
long long int var_17 = -6014766096388288844LL;
unsigned short var_18 = (unsigned short)52188;
unsigned char var_19 = (unsigned char)131;
unsigned char var_20 = (unsigned char)114;
long long int var_21 = -3569930027777759013LL;
unsigned long long int var_22 = 2758877613631713046ULL;
unsigned long long int var_23 = 7298008651557549882ULL;
long long int var_24 = -5467107159894328191LL;
long long int var_25 = 3754671077233380279LL;
unsigned char var_26 = (unsigned char)45;
long long int var_27 = -4816071647781902057LL;
unsigned long long int var_28 = 12863607010091319212ULL;
long long int var_29 = -4164494657357404767LL;
unsigned char var_30 = (unsigned char)59;
unsigned char var_31 = (unsigned char)17;
unsigned long long int var_32 = 4828370170121332838ULL;
unsigned char var_33 = (unsigned char)42;
unsigned short var_34 = (unsigned short)36993;
unsigned long long int var_35 = 6527608470007806815ULL;
unsigned long long int var_36 = 1099176535948559392ULL;
unsigned short var_37 = (unsigned short)61627;
unsigned long long int var_38 = 7702821956674908176ULL;
unsigned short var_39 = (unsigned short)47949;
unsigned short var_40 = (unsigned short)51869;
unsigned long long int var_41 = 17041761655234953096ULL;
unsigned char var_42 = (unsigned char)32;
unsigned short var_43 = (unsigned short)22267;
unsigned long long int var_44 = 12934046981433694229ULL;
long long int var_45 = 5942452200785584443LL;
unsigned char var_46 = (unsigned char)123;
unsigned char var_47 = (unsigned char)51;
long long int var_48 = -1523022485628188996LL;
long long int var_49 = -2629546192238120847LL;
long long int arr_26 [16] [16] [16] [16] [16] ;
long long int arr_27 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_28 [16] [16] [16] [16] ;
unsigned char arr_35 [16] ;
unsigned short arr_42 [24] ;
unsigned long long int arr_50 [24] ;
unsigned char arr_64 [24] ;
long long int arr_65 [24] ;
long long int arr_68 [24] ;
long long int arr_76 [24] [24] [24] ;
long long int arr_77 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 8521754997965005856LL : 6563208547970485884LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3814939306556223173LL : -5053186272627919682LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 17929081228879437375ULL : 13594360380961150614ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (unsigned short)19396;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_50 [i_0] = 9569333111655216652ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_64 [i_0] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_65 [i_0] = (i_0 % 2 == 0) ? -3288951212161763264LL : -4339323647605524888LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_68 [i_0] = (i_0 % 2 == 0) ? 8558114857110255543LL : 5058738271021691871LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4738658016130164340LL : -3609213678741116506LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_77 [i_0] = (i_0 % 2 == 0) ? -7489986670329972733LL : -4477006115280722729LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_68 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_76 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_77 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
