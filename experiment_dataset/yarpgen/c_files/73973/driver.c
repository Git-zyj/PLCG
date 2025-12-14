#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3771529531U;
_Bool var_7 = (_Bool)0;
long long int var_11 = 6541558967363227665LL;
unsigned int var_12 = 1163890040U;
unsigned int var_16 = 2141037576U;
int zero = 0;
signed char var_19 = (signed char)-85;
long long int var_20 = -1566344859858580411LL;
unsigned short var_21 = (unsigned short)37671;
unsigned short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)40157;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)58494;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
