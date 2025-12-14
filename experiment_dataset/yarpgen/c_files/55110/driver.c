#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 974476399;
signed char var_6 = (signed char)-89;
unsigned int var_10 = 2159628558U;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
unsigned short var_15 = (unsigned short)46549;
unsigned long long int var_16 = 8673574774730667242ULL;
long long int var_17 = -4388200022455792550LL;
unsigned char var_18 = (unsigned char)61;
unsigned short arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned char arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)30514;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 17961740024570397982ULL : 8589726870336819126ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)184 : (unsigned char)88;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
