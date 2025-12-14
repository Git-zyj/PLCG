#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11353;
long long int var_6 = 346037588694245859LL;
unsigned char var_7 = (unsigned char)237;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16990;
unsigned long long int var_10 = 10443399199059808895ULL;
int zero = 0;
long long int var_12 = 7600637784508316533LL;
unsigned long long int var_13 = 6500846901533923452ULL;
long long int var_14 = 5913876263532536955LL;
long long int arr_8 [13] [13] [13] [13] ;
_Bool arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -2207481475656877595LL : 6147776877890786177LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
