#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -411082128;
unsigned long long int var_4 = 15247873617704585007ULL;
unsigned char var_6 = (unsigned char)137;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = 190253551;
int zero = 0;
short var_14 = (short)26500;
unsigned long long int var_15 = 2081000174347076584ULL;
unsigned char var_16 = (unsigned char)212;
unsigned long long int var_17 = 16851977971636440622ULL;
unsigned int var_18 = 2360241679U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)40392;
long long int arr_0 [24] [24] ;
unsigned long long int arr_2 [24] ;
_Bool arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -5107427280657524903LL : -5725670284556686937LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10972761366817760408ULL : 13400756704212823042ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
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
