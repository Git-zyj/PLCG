#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8190733983026404025ULL;
signed char var_1 = (signed char)-32;
unsigned int var_2 = 3061439296U;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_10 = -2930711926505076412LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 779683295407479467LL;
long long int var_13 = -896682882990025625LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
