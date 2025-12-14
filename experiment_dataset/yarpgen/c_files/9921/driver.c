#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63675;
unsigned int var_2 = 681452087U;
long long int var_3 = 8174750350444108326LL;
unsigned short var_4 = (unsigned short)8307;
unsigned short var_5 = (unsigned short)33293;
unsigned long long int var_6 = 5135289565518501688ULL;
long long int var_7 = -728138085562295610LL;
long long int var_8 = 5357428631738281637LL;
int var_10 = 1254155484;
long long int var_11 = -4284763288602247213LL;
unsigned short var_12 = (unsigned short)51287;
unsigned char var_13 = (unsigned char)133;
long long int var_14 = -6983155492864977577LL;
long long int var_15 = 6117657175957652115LL;
unsigned long long int var_16 = 18234648957491876631ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)152;
unsigned long long int var_18 = 3003926356130636110ULL;
long long int var_19 = 2247002121677481457LL;
unsigned short var_20 = (unsigned short)20264;
unsigned long long int var_21 = 11885341434578835785ULL;
int var_22 = 1330616318;
unsigned short var_23 = (unsigned short)184;
unsigned short var_24 = (unsigned short)39463;
unsigned long long int var_25 = 709155802298546577ULL;
unsigned long long int var_26 = 866144318638098693ULL;
unsigned char arr_7 [22] [22] [22] [22] ;
int arr_14 [22] ;
unsigned int arr_15 [22] [22] [22] ;
unsigned long long int arr_16 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -1384609357;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 848803864U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = 8543602087725493857ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
