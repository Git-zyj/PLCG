#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)15;
int var_6 = -497158686;
int zero = 0;
unsigned char var_11 = (unsigned char)231;
signed char var_12 = (signed char)-74;
unsigned char var_13 = (unsigned char)37;
signed char var_14 = (signed char)-81;
int var_15 = 419581337;
unsigned long long int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7752825316666397001ULL : 816381084582312105ULL;
}

void checksum() {
    hash(&seed, var_11);
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
