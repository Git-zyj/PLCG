#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14569;
unsigned char var_2 = (unsigned char)152;
long long int var_5 = -2997347274031625283LL;
int var_6 = 258866050;
signed char var_9 = (signed char)-6;
unsigned long long int var_10 = 1676716302912898952ULL;
short var_11 = (short)-21852;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)64;
void init() {
}

void checksum() {
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
