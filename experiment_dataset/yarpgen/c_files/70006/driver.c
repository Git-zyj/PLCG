#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52672;
long long int var_4 = -4914634095694625634LL;
short var_7 = (short)21498;
short var_8 = (short)9547;
signed char var_12 = (signed char)-100;
unsigned long long int var_13 = 8501433019001560153ULL;
int var_14 = -873555058;
int zero = 0;
unsigned long long int var_15 = 2471530406114665551ULL;
short var_16 = (short)-23765;
unsigned long long int var_17 = 5560069787678819646ULL;
signed char var_18 = (signed char)29;
unsigned long long int var_19 = 3834125512659349351ULL;
short var_20 = (short)24536;
unsigned char var_21 = (unsigned char)91;
long long int arr_0 [18] ;
int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -609657189703264425LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1818537458;
}

void checksum() {
    hash(&seed, var_15);
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
