#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6557065166047179665ULL;
unsigned long long int var_1 = 18325519370869656591ULL;
int var_4 = 2037374299;
unsigned long long int var_5 = 17295094284661421804ULL;
unsigned long long int var_7 = 10332771467997546130ULL;
unsigned int var_8 = 2565293825U;
int var_10 = 1198572464;
int zero = 0;
int var_11 = 2014762159;
unsigned long long int var_12 = 5075888868416903153ULL;
int var_13 = 1836630953;
unsigned int var_14 = 2207420970U;
int var_15 = 1377629375;
int var_16 = -1289924968;
unsigned long long int var_17 = 16717359627125182873ULL;
unsigned int var_18 = 315929053U;
int var_19 = -936276846;
int var_20 = 1104673639;
unsigned int var_21 = 3553979264U;
unsigned int var_22 = 3952950111U;
unsigned long long int var_23 = 18078385401313570662ULL;
unsigned long long int var_24 = 7734844442054919399ULL;
unsigned long long int var_25 = 1128940057142115101ULL;
unsigned int var_26 = 296033076U;
int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_3 [18] [18] [18] ;
unsigned int arr_4 [18] [18] ;
int arr_6 [18] [18] [18] [18] ;
unsigned int arr_7 [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] [18] [18] ;
int arr_9 [18] [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] [18] ;
unsigned int arr_13 [18] [18] ;
unsigned long long int arr_14 [18] ;
int arr_16 [18] [18] ;
int arr_20 [18] ;
int arr_15 [18] ;
unsigned int arr_18 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1153051177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2794895384900764396ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 18223218650572642760ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2989068698U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 783519423;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2345572688U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1789078375U : 406456202U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 377370687 : 289870476;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 15526398507063888976ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = 943559437U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 2913274339347458936ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 1131440211 : 1928544547;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 1202123676;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 1415656370;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 4251181150U : 4226030163U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
