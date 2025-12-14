#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31731;
short var_1 = (short)20274;
unsigned int var_2 = 697045632U;
unsigned char var_4 = (unsigned char)85;
signed char var_5 = (signed char)15;
unsigned short var_6 = (unsigned short)30320;
unsigned char var_10 = (unsigned char)76;
unsigned long long int var_11 = 1223479994375482855ULL;
unsigned short var_12 = (unsigned short)57975;
unsigned long long int var_19 = 3181013341764517512ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
unsigned int var_21 = 3592669219U;
unsigned int var_22 = 739611447U;
unsigned int var_23 = 2037843209U;
unsigned long long int var_24 = 14513987343547330766ULL;
unsigned short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)11660 : (unsigned short)18190;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
