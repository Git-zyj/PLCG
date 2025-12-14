#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14759887462194957235ULL;
int var_3 = 1131035850;
long long int var_4 = 8253096113185862498LL;
long long int var_5 = -1335385190011841959LL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-11315;
int var_9 = -1699195367;
unsigned long long int var_12 = 18399243269235389283ULL;
unsigned short var_13 = (unsigned short)23621;
int var_15 = 815053143;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)81;
short var_18 = (short)24004;
signed char var_19 = (signed char)71;
unsigned char arr_0 [21] [21] ;
long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8644704638103144643LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
