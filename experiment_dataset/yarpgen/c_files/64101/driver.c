#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8070;
unsigned int var_5 = 3469844566U;
short var_8 = (short)-20574;
unsigned long long int var_9 = 18323613018048033302ULL;
short var_10 = (short)2052;
int var_11 = 1930423348;
int var_12 = 1201789161;
signed char var_13 = (signed char)-30;
short var_15 = (short)-8269;
unsigned char var_16 = (unsigned char)229;
long long int var_17 = -5810362643539327831LL;
int zero = 0;
signed char var_18 = (signed char)38;
short var_19 = (short)-21101;
int var_20 = -277366193;
short var_21 = (short)-26978;
long long int arr_0 [19] ;
short arr_4 [19] ;
int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 4594949131211522708LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)27343 : (short)-5803;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1250820086 : -1945946544;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
