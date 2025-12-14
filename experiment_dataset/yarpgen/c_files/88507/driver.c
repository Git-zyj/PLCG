#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15258;
unsigned char var_1 = (unsigned char)198;
long long int var_2 = 8451859827441382857LL;
unsigned short var_3 = (unsigned short)20005;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 371832218U;
signed char var_7 = (signed char)107;
long long int var_8 = 7318418478522667974LL;
long long int var_9 = -8261139920867107766LL;
int zero = 0;
signed char var_10 = (signed char)106;
short var_11 = (short)31134;
unsigned long long int var_12 = 5050431204477081286ULL;
unsigned short var_13 = (unsigned short)26997;
unsigned int var_14 = 3634458133U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
