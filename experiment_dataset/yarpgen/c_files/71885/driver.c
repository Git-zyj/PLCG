#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8281883729856615292LL;
long long int var_3 = -856763585463505046LL;
unsigned short var_12 = (unsigned short)39434;
short var_13 = (short)-24100;
short var_14 = (short)-23600;
int zero = 0;
long long int var_18 = -730535889615827728LL;
unsigned long long int var_19 = 18231909747714380899ULL;
long long int var_20 = 260104240542463032LL;
unsigned long long int arr_0 [14] [14] ;
long long int arr_2 [14] ;
signed char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 14368091107088876724ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2440375784176072283LL : -8949538166282078486LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-104 : (signed char)-126;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
