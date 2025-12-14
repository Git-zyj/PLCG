#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_1 = (signed char)102;
short var_4 = (short)-26941;
short var_6 = (short)5340;
unsigned long long int var_7 = 4984075911983447175ULL;
signed char var_8 = (signed char)-81;
unsigned long long int var_10 = 12742128241233378263ULL;
unsigned int var_11 = 1133420984U;
unsigned long long int var_12 = 10346604570512769396ULL;
int zero = 0;
long long int var_14 = -5322051002088157079LL;
unsigned long long int var_15 = 3651638422003308922ULL;
unsigned int var_16 = 3621101242U;
unsigned int var_17 = 2627036U;
short var_18 = (short)32209;
unsigned long long int arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15205048855227764824ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
