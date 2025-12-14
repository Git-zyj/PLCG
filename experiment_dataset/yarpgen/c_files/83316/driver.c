#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52295;
unsigned char var_4 = (unsigned char)218;
signed char var_6 = (signed char)-34;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)(-127 - 1);
long long int var_11 = 1378428343689914845LL;
int zero = 0;
unsigned short var_13 = (unsigned short)50026;
int var_14 = 1893247672;
signed char var_15 = (signed char)61;
void init() {
}

void checksum() {
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
