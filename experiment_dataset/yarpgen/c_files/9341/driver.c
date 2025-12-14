#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1278544897U;
unsigned char var_1 = (unsigned char)154;
signed char var_3 = (signed char)-112;
unsigned long long int var_4 = 15859964704813263158ULL;
unsigned long long int var_5 = 10891289842170329378ULL;
unsigned long long int var_7 = 7693006091140094046ULL;
unsigned int var_8 = 3516637825U;
signed char var_9 = (signed char)62;
int zero = 0;
unsigned short var_10 = (unsigned short)44714;
signed char var_11 = (signed char)-72;
unsigned int var_12 = 3821145986U;
unsigned int var_13 = 1043823542U;
unsigned long long int var_14 = 15757418984799020542ULL;
short arr_3 [10] [10] [10] ;
unsigned int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-729;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 2689516371U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
