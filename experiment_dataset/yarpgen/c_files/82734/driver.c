#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1745522709340148646ULL;
unsigned long long int var_1 = 14270460110295772098ULL;
unsigned short var_5 = (unsigned short)21316;
unsigned short var_9 = (unsigned short)27960;
unsigned int var_14 = 3558171632U;
int zero = 0;
unsigned short var_18 = (unsigned short)30731;
unsigned short var_19 = (unsigned short)893;
unsigned long long int var_20 = 1995832931171610080ULL;
unsigned long long int var_21 = 10178797274732634970ULL;
unsigned long long int var_22 = 12565949753132094259ULL;
unsigned long long int var_23 = 420956995967209498ULL;
unsigned long long int var_24 = 52038219605661442ULL;
unsigned long long int var_25 = 13439711912244432924ULL;
unsigned long long int var_26 = 13196778352467558544ULL;
unsigned int arr_1 [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
unsigned short arr_11 [22] [22] [22] ;
unsigned short arr_15 [22] [22] [22] [22] ;
unsigned long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1823581247U : 1902848976U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 9380030305148293090ULL : 8449334516755416632ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 12323304962322078500ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)2292;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2868;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 8060079399386822577ULL : 15089600764575649823ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
