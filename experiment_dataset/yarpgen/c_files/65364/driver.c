#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3156;
int var_3 = -1875926401;
long long int var_4 = -8438026139280152485LL;
long long int var_5 = 6794899957958726713LL;
long long int var_11 = -3568525800782565724LL;
unsigned char var_12 = (unsigned char)105;
int var_15 = 390102757;
int zero = 0;
long long int var_16 = 5263291484635308381LL;
short var_17 = (short)12080;
long long int var_18 = -2701851060712167560LL;
unsigned short var_19 = (unsigned short)54466;
signed char var_20 = (signed char)-82;
short arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-18624;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)47550;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
