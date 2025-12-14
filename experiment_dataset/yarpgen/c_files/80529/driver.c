#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6988528323880952746ULL;
int var_1 = -225416745;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)68;
long long int var_7 = -4549507276137469508LL;
unsigned int var_8 = 3553273071U;
unsigned int var_9 = 2195336943U;
int zero = 0;
unsigned long long int var_10 = 18375269624391301952ULL;
unsigned long long int var_11 = 6076947185723205076ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)68;
unsigned char var_14 = (unsigned char)207;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11728924201662718258ULL;
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
