#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)191;
unsigned long long int var_6 = 1981472376774290894ULL;
unsigned long long int var_8 = 16202687683888756627ULL;
unsigned char var_10 = (unsigned char)185;
unsigned long long int var_13 = 9386680342328322201ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1280005792U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)31376;
signed char var_23 = (signed char)32;
_Bool var_24 = (_Bool)0;
unsigned char arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6296248234517244265ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 3501080097U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
