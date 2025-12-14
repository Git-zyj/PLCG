#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_18 = (unsigned char)6;
unsigned long long int var_19 = 4223115223806860812ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8998732754046911998ULL;
signed char var_22 = (signed char)-29;
unsigned short var_23 = (unsigned short)10517;
unsigned long long int var_24 = 2951122214999057745ULL;
unsigned short var_25 = (unsigned short)30859;
unsigned int var_26 = 1940015003U;
long long int var_27 = 5530701699453489947LL;
unsigned long long int var_28 = 644033925219264146ULL;
long long int var_29 = -5933717707094874868LL;
long long int var_30 = 3091248815906284895LL;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)10461;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
