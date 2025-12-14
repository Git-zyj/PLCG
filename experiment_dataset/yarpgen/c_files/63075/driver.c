#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1290123457334382023LL;
unsigned char var_1 = (unsigned char)248;
int var_4 = 1352949152;
unsigned char var_5 = (unsigned char)169;
unsigned short var_7 = (unsigned short)46292;
long long int var_8 = -6146161908796205970LL;
unsigned long long int var_9 = 8268805009798678986ULL;
unsigned char var_12 = (unsigned char)136;
unsigned short var_13 = (unsigned short)27843;
short var_14 = (short)-30015;
int zero = 0;
unsigned long long int var_16 = 6463777947281665161ULL;
unsigned short var_17 = (unsigned short)35560;
unsigned int arr_3 [11] ;
long long int arr_4 [11] ;
int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1132924631U : 3605020108U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3790113043113999038LL : 5142333374681862443LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1390798841 : 995432444;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
