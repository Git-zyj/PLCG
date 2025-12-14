#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned char var_4 = (unsigned char)156;
unsigned long long int var_5 = 2652858842600555564ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)46;
unsigned long long int var_10 = 8231160907093963161ULL;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
long long int var_12 = 781698151438441983LL;
short var_13 = (short)31702;
unsigned long long int var_14 = 986911612454239726ULL;
unsigned char var_15 = (unsigned char)91;
unsigned char arr_0 [12] ;
_Bool arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
