#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned short var_1 = (unsigned short)2494;
long long int var_2 = -8907070657906318783LL;
signed char var_4 = (signed char)108;
short var_9 = (short)16329;
short var_10 = (short)-26783;
int zero = 0;
unsigned int var_11 = 32404713U;
unsigned short var_12 = (unsigned short)42266;
int var_13 = -1955632981;
signed char var_14 = (signed char)-21;
short var_15 = (short)26276;
int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -766585200;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
