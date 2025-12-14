#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5228313237855127597LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-47;
signed char var_8 = (signed char)38;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 1760034553533021869ULL;
short var_12 = (short)-4109;
int zero = 0;
short var_13 = (short)-22042;
int var_14 = -889025966;
short var_15 = (short)23569;
int var_16 = 826743878;
long long int var_17 = 1993184495098211558LL;
unsigned char var_18 = (unsigned char)57;
long long int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -3632642291613781533LL : -965009507708501193LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)29416 : (unsigned short)5172;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
