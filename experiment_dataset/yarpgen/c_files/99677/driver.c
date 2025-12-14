#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 725285181786190132ULL;
unsigned int var_4 = 1654890097U;
long long int var_6 = -6934072178021613656LL;
unsigned long long int var_7 = 7990147750750321522ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)64;
int var_15 = 1419744691;
int zero = 0;
unsigned long long int var_19 = 7433919019410036452ULL;
unsigned int var_20 = 194402820U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2534122064U;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 14360610878144417632ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
