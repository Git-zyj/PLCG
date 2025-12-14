#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
long long int var_2 = 704460632371086490LL;
unsigned char var_3 = (unsigned char)187;
unsigned char var_4 = (unsigned char)138;
signed char var_6 = (signed char)51;
_Bool var_8 = (_Bool)0;
long long int var_10 = 9037513248306240500LL;
int zero = 0;
signed char var_12 = (signed char)114;
long long int var_13 = -990295505692063475LL;
unsigned short var_14 = (unsigned short)47295;
int var_15 = -896963837;
int var_16 = 1120442567;
unsigned int arr_3 [22] [22] ;
long long int arr_4 [22] ;
signed char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3639101353U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -4209029358021620856LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)28;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
