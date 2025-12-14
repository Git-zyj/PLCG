#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18789;
long long int var_2 = 8904173649742347956LL;
short var_3 = (short)31714;
short var_4 = (short)-24542;
unsigned short var_7 = (unsigned short)17620;
int var_8 = 942924597;
long long int var_9 = -3415937526941929764LL;
int zero = 0;
unsigned short var_10 = (unsigned short)17941;
short var_11 = (short)17560;
unsigned char var_12 = (unsigned char)27;
unsigned char var_13 = (unsigned char)171;
signed char var_14 = (signed char)-7;
short var_15 = (short)-23844;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1030891409 : 289586740;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
