#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned int var_2 = 1149362612U;
unsigned int var_3 = 355071891U;
unsigned long long int var_5 = 2170311723889174512ULL;
unsigned char var_6 = (unsigned char)42;
unsigned char var_7 = (unsigned char)139;
unsigned long long int var_9 = 13783473025909664366ULL;
unsigned char var_10 = (unsigned char)114;
unsigned long long int var_11 = 8204850178302652445ULL;
unsigned long long int var_12 = 13287234743417052576ULL;
unsigned char var_14 = (unsigned char)116;
unsigned int var_15 = 80035495U;
unsigned char var_17 = (unsigned char)185;
unsigned int var_18 = 2298814675U;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
unsigned int var_20 = 2478107958U;
unsigned int var_21 = 2696474863U;
unsigned int var_22 = 1285431144U;
unsigned int arr_0 [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_5 [20] [20] [20] ;
unsigned long long int arr_10 [20] ;
unsigned int arr_3 [20] ;
unsigned long long int arr_11 [20] [20] [20] ;
unsigned long long int arr_19 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3853358273U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 8788518429865709521ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 15412740998914991631ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1915401276U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2231018911593296343ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 958476939164069399ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
