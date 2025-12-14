#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7043426504338318433LL;
unsigned char var_4 = (unsigned char)84;
long long int var_5 = -5281780036398816169LL;
long long int var_8 = -4579067302492813684LL;
unsigned int var_9 = 1022449907U;
unsigned long long int var_12 = 6432226429169270020ULL;
signed char var_13 = (signed char)-111;
unsigned short var_15 = (unsigned short)44096;
int zero = 0;
unsigned int var_18 = 1072099983U;
unsigned int var_19 = 1633860449U;
long long int var_20 = 6591680552814816420LL;
long long int var_21 = 4980693032463945034LL;
unsigned char var_22 = (unsigned char)249;
unsigned short var_23 = (unsigned short)46940;
signed char var_24 = (signed char)-31;
unsigned short arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned short arr_5 [24] [24] ;
unsigned short arr_6 [24] ;
unsigned long long int arr_9 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5010;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -94932273;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)25738;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33672 : (unsigned short)3669;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5803389770558906103ULL : 3619419385280168139ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
