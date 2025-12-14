#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 722922261U;
long long int var_3 = 1100686033299578173LL;
signed char var_4 = (signed char)-90;
int var_6 = 1100736428;
unsigned int var_8 = 1342177241U;
long long int var_10 = 150110875877314488LL;
int zero = 0;
int var_11 = -399735314;
signed char var_12 = (signed char)15;
unsigned int var_13 = 4133041313U;
unsigned int arr_3 [13] [13] [13] ;
int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2995347474U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -352004295;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
