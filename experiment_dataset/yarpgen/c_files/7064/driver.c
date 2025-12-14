#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-70;
long long int var_4 = 6856805742263000283LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)781;
unsigned short var_8 = (unsigned short)4873;
long long int var_9 = 7660358320639473610LL;
unsigned short var_10 = (unsigned short)34073;
int zero = 0;
unsigned int var_11 = 4112456130U;
unsigned long long int var_12 = 3478680486740441394ULL;
_Bool var_13 = (_Bool)0;
unsigned short arr_3 [17] [17] ;
unsigned long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)8761;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 11630161001129275729ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
