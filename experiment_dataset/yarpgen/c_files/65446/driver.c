#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)153;
signed char var_3 = (signed char)-96;
unsigned char var_4 = (unsigned char)129;
short var_5 = (short)-2388;
unsigned long long int var_8 = 845891327740600369ULL;
long long int var_9 = -2784033748244034705LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1541246422U;
unsigned int var_14 = 1360766240U;
short var_15 = (short)8044;
int arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 60886701;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1241544454U;
}

void checksum() {
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
