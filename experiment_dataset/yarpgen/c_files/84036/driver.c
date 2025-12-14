#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3616817225U;
signed char var_1 = (signed char)-107;
signed char var_3 = (signed char)46;
long long int var_4 = -6461367562243336672LL;
int var_7 = -591867278;
unsigned short var_9 = (unsigned short)10992;
unsigned char var_10 = (unsigned char)250;
unsigned short var_12 = (unsigned short)20584;
int zero = 0;
unsigned char var_13 = (unsigned char)77;
unsigned long long int var_14 = 13083190267375883534ULL;
signed char var_15 = (signed char)95;
_Bool var_16 = (_Bool)1;
short var_17 = (short)16736;
short var_18 = (short)23636;
long long int arr_2 [10] ;
unsigned short arr_4 [10] ;
signed char arr_8 [21] ;
unsigned short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -198962613483138460LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)39116;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22649 : (unsigned short)64868;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
