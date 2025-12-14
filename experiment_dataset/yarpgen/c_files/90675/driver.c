#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)57;
unsigned long long int var_7 = 8717480110053644475ULL;
signed char var_8 = (signed char)43;
short var_9 = (short)19780;
int var_10 = 380194717;
unsigned long long int var_12 = 10759666403686933940ULL;
signed char var_15 = (signed char)0;
int zero = 0;
unsigned char var_20 = (unsigned char)120;
unsigned char var_21 = (unsigned char)17;
unsigned char var_22 = (unsigned char)145;
unsigned int var_23 = 3417739049U;
_Bool var_24 = (_Bool)1;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned char arr_2 [15] ;
unsigned int arr_3 [15] ;
signed char arr_6 [13] ;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1775050756U : 3397824663U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)27668;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3057476149U : 3978955365U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 2187804064U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
