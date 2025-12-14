#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14836148991960014423ULL;
unsigned int var_1 = 522266795U;
unsigned short var_3 = (unsigned short)39962;
signed char var_5 = (signed char)32;
short var_8 = (short)17577;
short var_9 = (short)32119;
int zero = 0;
unsigned long long int var_10 = 15213926316950663450ULL;
int var_11 = 988981314;
unsigned int var_12 = 474914050U;
signed char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)91;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
