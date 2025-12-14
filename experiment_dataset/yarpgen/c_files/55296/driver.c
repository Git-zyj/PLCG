#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned int var_4 = 2222849277U;
signed char var_5 = (signed char)-30;
unsigned short var_6 = (unsigned short)1379;
int var_12 = -2034752638;
unsigned long long int var_13 = 7794426305466462348ULL;
long long int var_14 = -7640732085155826081LL;
int zero = 0;
unsigned char var_16 = (unsigned char)11;
unsigned int var_17 = 1143425885U;
unsigned char var_18 = (unsigned char)218;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12020003005668233856ULL;
long long int var_21 = 8275339541600537631LL;
unsigned long long int var_22 = 18381653449553011112ULL;
short var_23 = (short)25731;
unsigned long long int arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
_Bool arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8639281933561402551ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
