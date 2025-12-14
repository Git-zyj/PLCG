#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4323267937779698141LL;
unsigned long long int var_5 = 5338148998165005716ULL;
long long int var_7 = -3592687358561788789LL;
int var_8 = -1807479722;
int zero = 0;
unsigned short var_12 = (unsigned short)22031;
signed char var_13 = (signed char)-121;
int var_14 = -1180605356;
short var_15 = (short)12502;
unsigned char var_16 = (unsigned char)198;
unsigned long long int var_17 = 10295509291859661238ULL;
unsigned short arr_0 [18] ;
int arr_2 [18] [18] [18] ;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)9715;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 944448921;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)96;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
