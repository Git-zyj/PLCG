#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18199;
long long int var_3 = 2757998178600131951LL;
short var_8 = (short)7274;
short var_9 = (short)3845;
short var_10 = (short)10101;
unsigned short var_13 = (unsigned short)59929;
short var_14 = (short)-28032;
signed char var_15 = (signed char)-8;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
long long int var_19 = 4103670287490632319LL;
unsigned int var_20 = 163968656U;
signed char var_21 = (signed char)-63;
unsigned int var_22 = 3689962530U;
short var_23 = (short)-32009;
long long int arr_0 [23] [23] ;
short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -6801738546259183894LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)31641;
}

void checksum() {
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
