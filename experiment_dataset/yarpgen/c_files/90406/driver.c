#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4429;
long long int var_3 = 7413640200933829914LL;
short var_5 = (short)15208;
unsigned short var_6 = (unsigned short)48869;
unsigned short var_7 = (unsigned short)63171;
unsigned char var_8 = (unsigned char)26;
long long int var_9 = 1435038599368423826LL;
int zero = 0;
unsigned char var_10 = (unsigned char)189;
unsigned int var_11 = 2499006342U;
unsigned char var_12 = (unsigned char)171;
long long int var_13 = 821641190534195484LL;
short arr_3 [11] [11] ;
long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23715;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6468190174856903068LL : -1449573213773192209LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
