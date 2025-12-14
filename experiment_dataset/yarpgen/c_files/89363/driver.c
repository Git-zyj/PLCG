#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14636;
short var_3 = (short)22592;
unsigned int var_5 = 2882823091U;
unsigned int var_9 = 2966018423U;
int var_12 = 2049642026;
unsigned int var_14 = 1779392432U;
long long int var_15 = -7808758744076628980LL;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
unsigned short var_19 = (unsigned short)21683;
unsigned short var_20 = (unsigned short)43036;
long long int var_21 = 7243398058304029058LL;
unsigned long long int var_22 = 8501272196230596564ULL;
_Bool var_23 = (_Bool)1;
int arr_0 [12] ;
signed char arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 336947235 : 1015072389;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)57;
}

void checksum() {
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
