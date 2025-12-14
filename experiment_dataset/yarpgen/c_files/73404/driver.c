#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)73;
signed char var_5 = (signed char)94;
long long int var_10 = 4579860465356888675LL;
unsigned long long int var_13 = 2577964761804980161ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)2990;
long long int var_17 = -1174282800298534057LL;
signed char var_18 = (signed char)-92;
unsigned int var_19 = 2647999762U;
unsigned short var_20 = (unsigned short)54392;
unsigned long long int arr_0 [16] ;
int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5833550679323565132ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -161373587;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
