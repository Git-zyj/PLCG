#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 10287406558870242392ULL;
long long int var_9 = -2393470466122854256LL;
signed char var_11 = (signed char)65;
unsigned long long int var_13 = 9934116784904962281ULL;
int var_15 = -891673995;
signed char var_16 = (signed char)-111;
int zero = 0;
unsigned short var_18 = (unsigned short)41379;
signed char var_19 = (signed char)-124;
signed char var_20 = (signed char)77;
_Bool var_21 = (_Bool)1;
unsigned short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)57243;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
