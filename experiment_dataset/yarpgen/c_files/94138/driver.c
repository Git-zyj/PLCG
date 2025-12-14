#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2822;
unsigned long long int var_12 = 17343348550791500930ULL;
unsigned long long int var_15 = 6771588997610738926ULL;
unsigned short var_16 = (unsigned short)38178;
unsigned long long int var_17 = 2231225056253865820ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)58164;
signed char var_20 = (signed char)-34;
long long int var_21 = 8864694048288427935LL;
short var_22 = (short)25577;
unsigned char var_23 = (unsigned char)157;
unsigned short var_24 = (unsigned short)79;
unsigned long long int var_25 = 8756316614482219308ULL;
long long int arr_0 [12] ;
long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -416176954986176277LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2105548207951990258LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
