#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4176401756U;
signed char var_6 = (signed char)96;
int var_9 = 704960346;
unsigned int var_11 = 3107500924U;
long long int var_13 = -562752560894034441LL;
int zero = 0;
long long int var_15 = -6515671362089135640LL;
long long int var_16 = -3626686994006726213LL;
int var_17 = -249476183;
short var_18 = (short)-15899;
int var_19 = 174904869;
int var_20 = 2025583062;
signed char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
