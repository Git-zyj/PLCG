#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)9430;
long long int var_8 = 5357533122719121318LL;
unsigned short var_13 = (unsigned short)12294;
unsigned long long int var_15 = 9924264836283668829ULL;
unsigned char var_18 = (unsigned char)111;
int zero = 0;
long long int var_20 = 2780550233899950719LL;
signed char var_21 = (signed char)53;
unsigned char var_22 = (unsigned char)218;
long long int var_23 = 5435981731419921710LL;
short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)24748;
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
