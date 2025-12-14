#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5400773658799925712ULL;
long long int var_1 = 1034340522843710998LL;
long long int var_2 = -8450468251839972276LL;
short var_3 = (short)-4741;
long long int var_4 = 7778914847947389749LL;
short var_5 = (short)-19678;
short var_6 = (short)-29588;
unsigned long long int var_7 = 13015878569295683371ULL;
short var_8 = (short)-2923;
short var_9 = (short)-23757;
short var_10 = (short)32406;
int zero = 0;
short var_11 = (short)9300;
short var_12 = (short)17949;
long long int var_13 = -914996100189463894LL;
unsigned long long int var_14 = 10114111257804963703ULL;
short var_15 = (short)4381;
long long int var_16 = 7334393513792281245LL;
short var_17 = (short)-27982;
short var_18 = (short)-24762;
short var_19 = (short)-14598;
long long int var_20 = 4537842329688148553LL;
long long int var_21 = -413129646509897101LL;
short arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
long long int arr_2 [18] [18] ;
short arr_4 [18] ;
unsigned long long int arr_5 [18] ;
long long int arr_7 [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
unsigned long long int arr_10 [19] [19] ;
long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16610;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 6928716344557975146ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 7619599183269871709LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-3776;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3871589401037230797ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -8036059899445959108LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 15177950897584955686ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 18167854031274770289ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -4171119045372104151LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
