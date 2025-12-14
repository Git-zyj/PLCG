#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14291530426584876290ULL;
unsigned long long int var_3 = 11359041439672880652ULL;
unsigned long long int var_5 = 18411832306397235372ULL;
unsigned long long int var_6 = 2405330490348518647ULL;
unsigned long long int var_7 = 2035549814685721950ULL;
unsigned long long int var_9 = 14143888766004332995ULL;
unsigned long long int var_12 = 8599863212838867900ULL;
unsigned long long int var_13 = 12895038826245129937ULL;
unsigned long long int var_14 = 8500932186331394162ULL;
unsigned long long int var_15 = 18423244023096213585ULL;
unsigned long long int var_17 = 11730727206084712123ULL;
int zero = 0;
unsigned long long int var_18 = 12168971171295555722ULL;
unsigned long long int var_19 = 6762887156265665232ULL;
unsigned long long int var_20 = 2810467486122545705ULL;
unsigned long long int var_21 = 10741201491944017508ULL;
unsigned long long int var_22 = 8085169205393828206ULL;
unsigned long long int var_23 = 7271187323100056786ULL;
unsigned long long int var_24 = 4895189206622261787ULL;
unsigned long long int var_25 = 11289105081052644371ULL;
unsigned long long int var_26 = 13293170965155839967ULL;
unsigned long long int var_27 = 6536473412624514668ULL;
unsigned long long int var_28 = 12237217687988922104ULL;
unsigned long long int var_29 = 7591287937896821988ULL;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_5 [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
unsigned long long int arr_16 [13] [13] [13] ;
unsigned long long int arr_19 [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
unsigned long long int arr_14 [13] [13] ;
unsigned long long int arr_15 [13] [13] [13] [13] ;
unsigned long long int arr_23 [13] [13] [13] [13] ;
unsigned long long int arr_24 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5060265876846808876ULL : 6122758949695204710ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4599162822437826114ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 18316113712112231398ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4465037236414618264ULL : 5574621680052065208ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 6158312510889400164ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17019522894413325493ULL : 8679317762500732215ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 5536837430413518035ULL : 9542442052791847323ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11313712194167992719ULL : 3918662230181202011ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7299007342863078753ULL : 3407383445204644697ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2938872690801155276ULL : 17521069228217559233ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
