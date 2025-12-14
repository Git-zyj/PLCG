#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)43;
long long int var_8 = 8200099991586181956LL;
signed char var_9 = (signed char)-68;
unsigned short var_10 = (unsigned short)52331;
unsigned int var_11 = 852676415U;
int zero = 0;
int var_17 = 693016746;
unsigned long long int var_18 = 14504617331698529858ULL;
long long int var_19 = 3815167880658458437LL;
_Bool arr_1 [17] ;
int arr_2 [17] [17] ;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -25753627;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2121248489;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
