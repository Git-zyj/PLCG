#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50794;
long long int var_5 = -6192106970830715387LL;
long long int var_6 = -487578365267817924LL;
unsigned char var_7 = (unsigned char)97;
unsigned short var_9 = (unsigned short)36140;
int zero = 0;
long long int var_13 = -9168671678575697842LL;
unsigned long long int var_14 = 2586726364978513501ULL;
unsigned short var_15 = (unsigned short)44470;
unsigned long long int var_16 = 11834626813552261494ULL;
unsigned char var_17 = (unsigned char)7;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
