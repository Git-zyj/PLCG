#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1282255613U;
int var_10 = -1903528262;
short var_14 = (short)-3722;
long long int var_15 = -4810046379300803016LL;
int zero = 0;
unsigned long long int var_20 = 7537504840065472573ULL;
short var_21 = (short)15293;
unsigned int var_22 = 2895060939U;
int var_23 = 1185857093;
unsigned char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)108;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
