#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3433947206U;
long long int var_3 = 276864525373354861LL;
long long int var_6 = -6244531602358036118LL;
signed char var_8 = (signed char)89;
unsigned short var_10 = (unsigned short)53568;
unsigned char var_12 = (unsigned char)41;
int zero = 0;
signed char var_13 = (signed char)-98;
unsigned long long int var_14 = 9066720951539420976ULL;
short var_15 = (short)-30690;
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
