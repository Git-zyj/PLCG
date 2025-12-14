#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26578;
unsigned short var_7 = (unsigned short)24123;
int var_8 = -1398718055;
_Bool var_9 = (_Bool)0;
short var_12 = (short)-16087;
int zero = 0;
short var_14 = (short)31609;
unsigned char var_15 = (unsigned char)165;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)194;
long long int var_18 = 5772513700277165545LL;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1691357690;
}

void checksum() {
    hash(&seed, var_14);
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
