#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)37;
signed char var_7 = (signed char)27;
unsigned long long int var_8 = 10172276384745695759ULL;
unsigned char var_9 = (unsigned char)239;
signed char var_16 = (signed char)-6;
int zero = 0;
unsigned long long int var_18 = 17163183074967108695ULL;
unsigned long long int var_19 = 15027357900735981476ULL;
unsigned long long int var_20 = 6948140293652416943ULL;
unsigned long long int var_21 = 15854091308241446498ULL;
signed char arr_0 [18] [18] ;
signed char arr_8 [20] [20] ;
unsigned char arr_9 [20] ;
unsigned long long int arr_6 [18] [18] ;
signed char arr_13 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 7304104012746902371ULL : 4856407917378775805ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)-39;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
