#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 944541120;
unsigned char var_1 = (unsigned char)83;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12978028899069501582ULL;
unsigned char var_8 = (unsigned char)121;
int zero = 0;
signed char var_12 = (signed char)-63;
unsigned long long int var_13 = 16905539680493991961ULL;
unsigned short var_14 = (unsigned short)28721;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5351538242438994815LL;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)44222;
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
