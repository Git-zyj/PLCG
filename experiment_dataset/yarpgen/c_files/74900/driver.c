#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-66;
signed char var_3 = (signed char)-1;
int var_4 = 1086184313;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)9900;
signed char var_10 = (signed char)46;
int zero = 0;
int var_12 = -1120597581;
unsigned int var_13 = 2764587967U;
short var_14 = (short)-10286;
unsigned char var_15 = (unsigned char)32;
signed char var_16 = (signed char)-90;
_Bool var_17 = (_Bool)1;
unsigned int arr_0 [25] ;
signed char arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1823352523U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-46;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
