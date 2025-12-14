#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)678;
unsigned char var_2 = (unsigned char)243;
unsigned long long int var_6 = 14036287639376158913ULL;
unsigned long long int var_8 = 101868697356733801ULL;
unsigned long long int var_10 = 6160252102622447722ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)21815;
short var_21 = (short)21464;
unsigned int var_22 = 4136975346U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 10993414775983101690ULL;
unsigned int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 432334402U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
