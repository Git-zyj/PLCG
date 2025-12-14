#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1192984909U;
unsigned int var_3 = 3134914416U;
int var_5 = -510900424;
signed char var_7 = (signed char)41;
unsigned char var_8 = (unsigned char)187;
unsigned short var_13 = (unsigned short)58961;
unsigned short var_15 = (unsigned short)42868;
unsigned long long int var_16 = 13276169355657647979ULL;
signed char var_17 = (signed char)-47;
int zero = 0;
unsigned int var_18 = 3035379368U;
unsigned char var_19 = (unsigned char)119;
long long int var_20 = -268144384380848366LL;
unsigned long long int var_21 = 11042896279268863799ULL;
unsigned short arr_0 [10] [10] ;
unsigned int arr_8 [10] [10] [10] [10] ;
unsigned int arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)54869;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1998623515U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 4276798310U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
