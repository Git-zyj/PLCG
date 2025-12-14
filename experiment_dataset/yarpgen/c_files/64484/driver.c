#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7597382112555831554ULL;
signed char var_2 = (signed char)123;
long long int var_3 = 7301089935400725971LL;
signed char var_5 = (signed char)114;
short var_8 = (short)-19228;
unsigned long long int var_14 = 6707067687965105712ULL;
int zero = 0;
signed char var_17 = (signed char)-12;
unsigned long long int var_18 = 17022029896542520271ULL;
long long int var_19 = 2469011396716384131LL;
unsigned char var_20 = (unsigned char)123;
long long int var_21 = 4001667554807772094LL;
short var_22 = (short)-24846;
unsigned char arr_1 [13] ;
signed char arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-72;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
