#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1572906455;
unsigned int var_1 = 3662141682U;
int var_2 = 1812474572;
unsigned int var_3 = 241642113U;
unsigned char var_4 = (unsigned char)193;
unsigned int var_5 = 2837418811U;
int var_6 = 1846139539;
int var_9 = -47676625;
unsigned long long int var_11 = 17701810820226435840ULL;
signed char var_12 = (signed char)-11;
int var_13 = 1314096408;
int zero = 0;
signed char var_15 = (signed char)-20;
signed char var_16 = (signed char)47;
long long int var_17 = 6591779573348150819LL;
unsigned char var_18 = (unsigned char)84;
signed char arr_3 [25] [25] ;
int arr_4 [25] [25] ;
signed char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 404199940;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)82;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
