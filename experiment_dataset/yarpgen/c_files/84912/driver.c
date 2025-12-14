#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16126;
unsigned long long int var_3 = 8872390579269586148ULL;
unsigned short var_13 = (unsigned short)52570;
unsigned long long int var_18 = 4744726588568755964ULL;
unsigned short var_19 = (unsigned short)41819;
int zero = 0;
int var_20 = -2113552036;
int var_21 = 1641770360;
unsigned int var_22 = 50217476U;
unsigned long long int var_23 = 15010316036102272429ULL;
unsigned char arr_8 [10] ;
signed char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)110 : (signed char)114;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
