#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1266129527U;
signed char var_3 = (signed char)72;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 1991408162945145583ULL;
unsigned long long int var_7 = 4428586503737314640ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)169;
unsigned long long int var_13 = 2792896212915668761ULL;
signed char var_14 = (signed char)-59;
unsigned char var_15 = (unsigned char)219;
signed char var_16 = (signed char)-126;
unsigned int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3806521428U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
