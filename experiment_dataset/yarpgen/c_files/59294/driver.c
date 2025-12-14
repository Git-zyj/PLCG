#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_3 = (signed char)-110;
signed char var_4 = (signed char)-80;
short var_10 = (short)17079;
signed char var_15 = (signed char)19;
int zero = 0;
int var_18 = -1937290995;
int var_19 = -446076549;
unsigned char var_20 = (unsigned char)28;
int var_21 = 385969098;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1482855127082614297LL;
}

void checksum() {
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
