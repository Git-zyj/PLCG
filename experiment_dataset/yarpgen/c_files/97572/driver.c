#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
int var_2 = 1803221260;
signed char var_7 = (signed char)-127;
long long int var_8 = -5342213522344711781LL;
unsigned int var_9 = 1181610644U;
int var_12 = 995952481;
int zero = 0;
unsigned short var_13 = (unsigned short)41658;
signed char var_14 = (signed char)-44;
int var_15 = -2028691019;
signed char var_16 = (signed char)72;
unsigned int var_17 = 3834188512U;
long long int var_18 = -663216462195683935LL;
_Bool arr_1 [11] ;
unsigned int arr_2 [11] ;
unsigned short arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2819406645U : 3248431632U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)48224 : (unsigned short)59567;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
