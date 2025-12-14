#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6943;
unsigned long long int var_3 = 6886221185646450536ULL;
unsigned int var_6 = 3561033029U;
unsigned short var_8 = (unsigned short)31445;
int zero = 0;
unsigned long long int var_10 = 6578944375741804136ULL;
unsigned long long int var_11 = 11495729187761076608ULL;
unsigned long long int var_12 = 16638304664540002357ULL;
unsigned short var_13 = (unsigned short)18929;
signed char var_14 = (signed char)-38;
unsigned short arr_3 [19] [19] ;
unsigned short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)11128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)4143;
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
