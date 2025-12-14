#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22352;
_Bool var_1 = (_Bool)1;
long long int var_3 = 6110134335562455794LL;
unsigned long long int var_5 = 12739690584356233152ULL;
unsigned long long int var_7 = 5580664648947793438ULL;
unsigned long long int var_8 = 11146315458120684318ULL;
short var_10 = (short)10170;
long long int var_12 = -5199215488123139647LL;
int zero = 0;
unsigned long long int var_16 = 7936888391701820192ULL;
long long int var_17 = -5742386271052516419LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)26326;
signed char var_20 = (signed char)-13;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_5 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
long long int arr_7 [24] ;
long long int arr_8 [24] ;
_Bool arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7781416229699186183ULL : 13927435748735183199ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45496 : (unsigned short)62098;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 18128033620344096501ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 12510043822590382284ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3349397831582140289ULL : 2159211393438075601ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -1151502659990309391LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 8372656667211037219LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
