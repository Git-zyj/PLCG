#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -261528850;
long long int var_2 = 1381577481908658214LL;
int var_4 = 950564607;
unsigned char var_7 = (unsigned char)165;
short var_8 = (short)6098;
signed char var_9 = (signed char)-45;
long long int var_10 = -2708354773834956039LL;
unsigned long long int var_12 = 15550576947190919766ULL;
short var_15 = (short)29197;
int zero = 0;
unsigned short var_18 = (unsigned short)26787;
unsigned short var_19 = (unsigned short)40556;
unsigned long long int var_20 = 15859447928546692169ULL;
short var_21 = (short)-5008;
short var_22 = (short)-26963;
unsigned int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 34423857U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
