#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)82;
short var_7 = (short)-20021;
unsigned char var_13 = (unsigned char)150;
unsigned long long int var_17 = 11311597490623763397ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)133;
unsigned char var_19 = (unsigned char)174;
int var_20 = -1510149007;
_Bool var_21 = (_Bool)0;
int var_22 = -1562227949;
unsigned char var_23 = (unsigned char)188;
int arr_1 [12] ;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1009771638;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
