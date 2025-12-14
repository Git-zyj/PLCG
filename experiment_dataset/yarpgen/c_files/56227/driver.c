#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1132347603;
long long int var_1 = 7908503918272531414LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6166179571401605718ULL;
long long int var_8 = -7489726072545581433LL;
unsigned short var_10 = (unsigned short)25805;
long long int var_11 = -5488370951587118395LL;
long long int var_12 = 6059414518310948344LL;
signed char var_13 = (signed char)-9;
int zero = 0;
unsigned long long int var_14 = 5014198062970672630ULL;
int var_15 = 114832949;
unsigned char var_16 = (unsigned char)188;
int var_17 = -916644034;
unsigned char var_18 = (unsigned char)228;
long long int arr_5 [14] ;
unsigned char arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -5508317703090162833LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
