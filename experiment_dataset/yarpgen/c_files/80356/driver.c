#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1028054785338932020ULL;
unsigned short var_2 = (unsigned short)7608;
unsigned long long int var_4 = 18266018239900197577ULL;
unsigned long long int var_6 = 4362136806909403511ULL;
unsigned short var_8 = (unsigned short)10921;
unsigned short var_10 = (unsigned short)1286;
unsigned long long int var_11 = 12291323002229010173ULL;
unsigned short var_12 = (unsigned short)40355;
unsigned long long int var_13 = 13830429817466268158ULL;
unsigned long long int var_15 = 3618211362365350924ULL;
unsigned long long int var_17 = 14952201542024496218ULL;
int zero = 0;
unsigned long long int var_19 = 7037730320508663868ULL;
unsigned long long int var_20 = 13207141674558908032ULL;
unsigned short var_21 = (unsigned short)6835;
unsigned short var_22 = (unsigned short)4849;
unsigned short var_23 = (unsigned short)57188;
unsigned long long int var_24 = 3330970700777601494ULL;
unsigned short arr_1 [25] [25] ;
unsigned short arr_6 [25] [25] ;
unsigned short arr_9 [13] ;
unsigned long long int arr_11 [13] [13] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_7 [25] [25] [25] ;
unsigned long long int arr_8 [25] [25] [25] ;
unsigned short arr_12 [13] ;
unsigned long long int arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18323;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)18076;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)45824;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 8280206449648115084ULL : 338977066263794153ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 16022244141131617052ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6512269161476164128ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 17905340352334845661ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1099 : (unsigned short)31653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 11105109243222545536ULL : 6426754881767658538ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
