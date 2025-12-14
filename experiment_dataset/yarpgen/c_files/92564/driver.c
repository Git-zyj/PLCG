#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7802391953032940672ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 16745155210833952346ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 6022206466264923886ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)53;
unsigned long long int var_17 = 7003242863565183444ULL;
unsigned long long int var_18 = 8757754459164150544ULL;
unsigned long long int var_19 = 15505519057726843262ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11059909464300793713ULL;
_Bool arr_2 [14] [14] [14] ;
unsigned char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)236;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
