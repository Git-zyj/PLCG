#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
long long int var_2 = -2066785246752118155LL;
long long int var_4 = 3847098976798378276LL;
unsigned long long int var_6 = 6798537644042359642ULL;
long long int var_7 = -8555424488397780262LL;
signed char var_12 = (signed char)117;
int zero = 0;
long long int var_13 = 5403367395365485842LL;
signed char var_14 = (signed char)107;
unsigned long long int var_15 = 14385712788936811572ULL;
unsigned char var_16 = (unsigned char)4;
int var_17 = 1144382856;
unsigned char var_18 = (unsigned char)89;
short arr_1 [10] ;
unsigned char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-10739;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)77;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
