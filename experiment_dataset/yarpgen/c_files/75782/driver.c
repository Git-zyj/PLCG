#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6214232350847136805LL;
unsigned long long int var_3 = 1194037359046377595ULL;
unsigned long long int var_5 = 13224917292327112029ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 4043615510U;
int var_9 = 375130954;
_Bool var_10 = (_Bool)0;
long long int var_12 = 2977239314438468913LL;
signed char var_13 = (signed char)19;
int zero = 0;
int var_14 = 548376334;
_Bool var_15 = (_Bool)0;
int var_16 = 928293262;
int var_17 = -1464902444;
unsigned char var_18 = (unsigned char)156;
unsigned int var_19 = 3737361943U;
short var_20 = (short)-19502;
unsigned char arr_0 [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)40;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
