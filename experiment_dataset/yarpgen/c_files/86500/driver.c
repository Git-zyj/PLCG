#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_1 = 4250358722U;
unsigned long long int var_2 = 1807269219479549265ULL;
unsigned long long int var_5 = 9605804032842684457ULL;
unsigned long long int var_6 = 10208520608020952013ULL;
short var_8 = (short)11738;
unsigned int var_9 = 3889644231U;
unsigned int var_10 = 1550392635U;
long long int var_15 = -4887094747844986756LL;
int zero = 0;
unsigned char var_16 = (unsigned char)101;
signed char var_17 = (signed char)-54;
unsigned int var_18 = 2812100010U;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 6576637597859630648ULL : 3741768662314710217ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
