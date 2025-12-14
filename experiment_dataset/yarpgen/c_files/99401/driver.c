#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2970863357130216117LL;
unsigned short var_8 = (unsigned short)25180;
unsigned short var_10 = (unsigned short)31720;
unsigned short var_16 = (unsigned short)23729;
int zero = 0;
unsigned char var_17 = (unsigned char)81;
long long int var_18 = -2557244383232959393LL;
unsigned int var_19 = 299915172U;
short var_20 = (short)-1546;
unsigned int var_21 = 3179112943U;
int var_22 = -353767270;
unsigned short arr_0 [14] ;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)61818;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -6036519898268337132LL : 2545010190532736621LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
