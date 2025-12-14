#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25995;
unsigned long long int var_2 = 5215096084035985816ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)64683;
unsigned char var_5 = (unsigned char)201;
int var_6 = 174835708;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
short var_10 = (short)9351;
long long int var_11 = -1869608489278882637LL;
unsigned char var_12 = (unsigned char)169;
short var_13 = (short)27290;
signed char var_14 = (signed char)121;
long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
signed char arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1088529074976288052LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2720258282U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15216510173239254567ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-31;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
