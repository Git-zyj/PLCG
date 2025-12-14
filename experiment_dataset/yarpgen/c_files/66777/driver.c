#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3799563948U;
long long int var_3 = 2698604569791053721LL;
long long int var_4 = -1331775155593409027LL;
long long int var_6 = 6717947844494649375LL;
unsigned long long int var_7 = 1601149738736893872ULL;
long long int var_8 = 2509227888820062090LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 8336557681012547275LL;
long long int var_13 = -1404952676442026281LL;
int var_14 = 330844594;
long long int arr_0 [20] ;
int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_3 [20] [20] [20] ;
long long int arr_4 [20] [20] [20] ;
long long int arr_6 [20] [20] [20] [20] ;
long long int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -3705657622722774479LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 334624259;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 930031056732588902ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7453467269808379620LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -220673297768271692LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -5452079569842696385LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -1457678072557887162LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
