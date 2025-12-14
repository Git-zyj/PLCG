#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 811788285U;
short var_9 = (short)-6302;
int var_10 = 1878425192;
short var_11 = (short)-28420;
int zero = 0;
unsigned short var_12 = (unsigned short)48509;
int var_13 = -1100130183;
int var_14 = 1077625859;
short var_15 = (short)6543;
unsigned long long int var_16 = 17247991859081937790ULL;
int arr_1 [24] ;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1676681439;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 13034840647876960781ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
