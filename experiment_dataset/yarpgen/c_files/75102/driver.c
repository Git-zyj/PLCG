#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1922567703;
unsigned short var_6 = (unsigned short)42298;
unsigned int var_11 = 1686875642U;
int var_13 = 1090233411;
int var_15 = 711283917;
unsigned long long int var_19 = 1643108460322888040ULL;
int zero = 0;
unsigned int var_20 = 4065909098U;
unsigned short var_21 = (unsigned short)6586;
int var_22 = -1182185894;
unsigned short arr_1 [22] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)65148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1139087924;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
