#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1381201198U;
unsigned int var_4 = 186269508U;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
unsigned short var_12 = (unsigned short)32318;
unsigned int var_13 = 3692480176U;
signed char var_14 = (signed char)72;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5395388972330442921LL;
int var_17 = -344083647;
unsigned char arr_0 [12] ;
int arr_2 [12] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1393556886;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1817124988U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
