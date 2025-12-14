#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22647;
long long int var_7 = 1060044530771726297LL;
unsigned int var_10 = 155146385U;
unsigned long long int var_11 = 18086489570495015463ULL;
int zero = 0;
signed char var_12 = (signed char)46;
unsigned int var_13 = 2513677241U;
unsigned char var_14 = (unsigned char)59;
long long int var_15 = 3764633234175793101LL;
long long int var_16 = 6780911504859526306LL;
long long int var_17 = 6190475559308007439LL;
signed char arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 16621418659026172193ULL;
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
