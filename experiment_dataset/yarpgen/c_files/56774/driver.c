#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46756;
unsigned long long int var_2 = 8731813023925583825ULL;
long long int var_4 = -7580641401687961954LL;
unsigned short var_5 = (unsigned short)9845;
unsigned long long int var_6 = 2867064810692674488ULL;
long long int var_7 = 6100854294087359456LL;
long long int var_9 = -5675856621516722621LL;
long long int var_10 = 3227564278188919033LL;
unsigned int var_12 = 2978926526U;
unsigned short var_14 = (unsigned short)47108;
unsigned int var_15 = 3318931975U;
int zero = 0;
unsigned short var_16 = (unsigned short)12970;
unsigned int var_17 = 2193998600U;
unsigned int var_18 = 3617906089U;
unsigned int var_19 = 2329421401U;
long long int var_20 = 3028577058928695403LL;
unsigned long long int var_21 = 12224647046075876547ULL;
long long int var_22 = -4376231271203295143LL;
long long int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2442709564863213931LL : 1775948323277403566LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
