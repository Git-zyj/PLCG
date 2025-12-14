#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-105;
short var_17 = (short)-16201;
int zero = 0;
unsigned long long int var_20 = 10790180868397802794ULL;
long long int var_21 = 6862713640735469353LL;
long long int var_22 = 1801474075459216778LL;
long long int var_23 = 4559599181632620664LL;
unsigned char var_24 = (unsigned char)209;
signed char arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)12;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
