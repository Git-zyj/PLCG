#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4293370493U;
_Bool var_2 = (_Bool)0;
int var_4 = 1942349555;
int var_5 = -438998961;
int var_9 = 2077191654;
signed char var_16 = (signed char)32;
int zero = 0;
signed char var_18 = (signed char)-48;
signed char var_19 = (signed char)127;
unsigned char var_20 = (unsigned char)182;
int var_21 = -129311371;
_Bool var_22 = (_Bool)1;
int arr_0 [21] ;
signed char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1828977329;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)56;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
