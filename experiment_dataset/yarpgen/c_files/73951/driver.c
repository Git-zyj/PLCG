#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
signed char var_1 = (signed char)16;
unsigned long long int var_4 = 6700211960978670235ULL;
signed char var_5 = (signed char)-116;
unsigned long long int var_7 = 4918788108808007320ULL;
unsigned long long int var_9 = 8388002399096576840ULL;
int zero = 0;
signed char var_13 = (signed char)62;
signed char var_14 = (signed char)-86;
unsigned long long int var_15 = 5310025931509220346ULL;
unsigned long long int var_16 = 4737217231735431638ULL;
signed char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
short arr_3 [14] [14] ;
signed char arr_4 [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 239016693728782888ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9726;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 1742419588;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
