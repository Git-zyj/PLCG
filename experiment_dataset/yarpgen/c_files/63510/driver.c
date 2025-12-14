#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
int var_12 = 1978104355;
unsigned int var_14 = 784004006U;
int var_16 = -1040656743;
int zero = 0;
signed char var_17 = (signed char)-57;
unsigned char var_18 = (unsigned char)88;
_Bool var_19 = (_Bool)1;
int var_20 = -439381813;
unsigned short var_21 = (unsigned short)28621;
unsigned char arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)139 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)61;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
