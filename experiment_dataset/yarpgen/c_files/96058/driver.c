#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5014;
int var_3 = -1529395919;
unsigned long long int var_4 = 2527939353430439479ULL;
unsigned int var_5 = 1651294926U;
unsigned int var_8 = 98157986U;
unsigned char var_9 = (unsigned char)230;
unsigned int var_11 = 2403941490U;
unsigned int var_16 = 2064162657U;
int zero = 0;
unsigned long long int var_17 = 13484791458142124804ULL;
int var_18 = -1095393293;
unsigned short var_19 = (unsigned short)31652;
unsigned short var_20 = (unsigned short)16015;
int var_21 = 2039536805;
unsigned long long int var_22 = 5030299221429873169ULL;
unsigned int var_23 = 1726054079U;
int var_24 = 1586690743;
long long int arr_0 [25] ;
long long int arr_1 [25] ;
unsigned short arr_13 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -106971137441186290LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7797271963900474574LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43321;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
