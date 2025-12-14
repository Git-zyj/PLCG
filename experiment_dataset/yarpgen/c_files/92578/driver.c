#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned long long int var_2 = 16312606667965974527ULL;
unsigned long long int var_4 = 3330549992034431683ULL;
unsigned long long int var_5 = 1594855777736850117ULL;
unsigned short var_6 = (unsigned short)31360;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2474573776121484493ULL;
int zero = 0;
unsigned long long int var_10 = 12361560723157483599ULL;
unsigned short var_11 = (unsigned short)35847;
unsigned short var_12 = (unsigned short)19745;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
