#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
signed char var_2 = (signed char)-11;
unsigned long long int var_3 = 7689165225241561439ULL;
signed char var_4 = (signed char)-40;
unsigned short var_5 = (unsigned short)14125;
signed char var_6 = (signed char)88;
unsigned long long int var_7 = 8338841285836951477ULL;
unsigned short var_8 = (unsigned short)36036;
unsigned short var_9 = (unsigned short)10717;
unsigned long long int var_11 = 13168598183180536602ULL;
signed char var_12 = (signed char)-50;
unsigned short var_13 = (unsigned short)55605;
unsigned short var_14 = (unsigned short)51203;
unsigned short var_15 = (unsigned short)40312;
signed char var_16 = (signed char)-124;
unsigned long long int var_17 = 706306405147719083ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)60041;
unsigned short var_19 = (unsigned short)52133;
signed char var_20 = (signed char)56;
unsigned short var_21 = (unsigned short)41740;
unsigned long long int var_22 = 14852135345022713596ULL;
signed char var_23 = (signed char)62;
unsigned long long int var_24 = 3203395115318269630ULL;
unsigned short var_25 = (unsigned short)42509;
unsigned long long int var_26 = 118922488985939296ULL;
unsigned long long int var_27 = 18304499330293648159ULL;
unsigned short var_28 = (unsigned short)41761;
signed char var_29 = (signed char)-30;
unsigned long long int var_30 = 17737099713015192089ULL;
unsigned short var_31 = (unsigned short)21883;
unsigned long long int var_32 = 14366566258028790119ULL;
unsigned short var_33 = (unsigned short)36143;
unsigned short var_34 = (unsigned short)20779;
unsigned long long int var_35 = 10021854646064276261ULL;
unsigned long long int var_36 = 16400729296953573943ULL;
unsigned long long int var_37 = 1024195077856704525ULL;
signed char var_38 = (signed char)101;
unsigned short arr_0 [24] ;
unsigned long long int arr_1 [24] ;
signed char arr_3 [24] ;
signed char arr_4 [24] [24] ;
signed char arr_5 [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
signed char arr_11 [24] [24] [24] [24] [24] ;
unsigned long long int arr_14 [24] ;
unsigned long long int arr_15 [24] ;
unsigned short arr_20 [24] [24] [24] ;
unsigned long long int arr_22 [24] [24] [24] [24] [24] ;
unsigned short arr_24 [24] [24] [24] [24] [24] [24] ;
signed char arr_26 [24] [24] [24] [24] [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned short arr_13 [24] [24] [24] ;
unsigned short arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)45701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 311426771255325185ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)79 : (signed char)-56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 10989738457553091051ULL : 6544702339968704398ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 12560333952336455881ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 15913203839370975206ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 16577371642072080187ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)1220;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 9503963877097289202ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)32386;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 4695296327884440165ULL : 15686435610368848177ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)33116 : (unsigned short)16340;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)9438;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
