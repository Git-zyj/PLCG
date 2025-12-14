#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17616885603784453454ULL;
unsigned long long int var_1 = 11239269161516965784ULL;
unsigned int var_3 = 3051870113U;
unsigned long long int var_5 = 16103045842589813582ULL;
signed char var_6 = (signed char)72;
unsigned int var_7 = 3399873618U;
unsigned long long int var_11 = 387974970196002233ULL;
unsigned long long int var_13 = 12124056288653319397ULL;
unsigned long long int var_15 = 10098932183120407527ULL;
unsigned int var_16 = 4090161182U;
signed char var_19 = (signed char)12;
int zero = 0;
unsigned long long int var_20 = 11238322444646881503ULL;
unsigned long long int var_21 = 10222663146613675358ULL;
signed char var_22 = (signed char)-56;
unsigned int var_23 = 724179142U;
unsigned long long int var_24 = 8724752637594533275ULL;
unsigned long long int var_25 = 4787362550487749508ULL;
signed char var_26 = (signed char)19;
unsigned long long int var_27 = 4703018963097485953ULL;
unsigned long long int var_28 = 6454172697981219830ULL;
unsigned long long int var_29 = 1675832732731347480ULL;
unsigned long long int var_30 = 17310928742019947419ULL;
unsigned int var_31 = 773148099U;
unsigned long long int var_32 = 727553566578918085ULL;
unsigned long long int var_33 = 17330022705154764923ULL;
unsigned long long int var_34 = 1890120860221265336ULL;
unsigned long long int var_35 = 17978119514000616507ULL;
unsigned long long int var_36 = 2790980552681792187ULL;
unsigned long long int var_37 = 11925310628768182774ULL;
unsigned int var_38 = 57528607U;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned long long int arr_8 [17] ;
unsigned long long int arr_14 [24] ;
unsigned long long int arr_19 [18] [18] ;
unsigned long long int arr_22 [18] ;
unsigned long long int arr_25 [21] ;
unsigned long long int arr_32 [14] ;
unsigned long long int arr_33 [14] [14] [14] ;
unsigned int arr_37 [14] [14] ;
unsigned long long int arr_38 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1687834673902168184ULL : 15330131031754708321ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 12310284007806303602ULL : 15335091812651086657ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 766751188288305210ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 15381645925958714745ULL : 4028746870079172539ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = 8855973083103126493ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = 2394800198161804349ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 15256974975075069714ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 14908110091766701362ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 6224175015483104104ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_37 [i_0] [i_1] = 1617370974U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = 7911060446870100416ULL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
