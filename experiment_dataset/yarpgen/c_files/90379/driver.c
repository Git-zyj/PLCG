#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3224965309U;
signed char var_9 = (signed char)125;
int zero = 0;
int var_20 = -1327225936;
unsigned char var_21 = (unsigned char)211;
int var_22 = 2110447011;
unsigned long long int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
int arr_3 [17] ;
signed char arr_4 [17] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 11102024833399829785ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)31700;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -2105418287;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 17349427117151751439ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
