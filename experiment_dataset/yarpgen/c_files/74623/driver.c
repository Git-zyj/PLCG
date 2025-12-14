#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5303981278958972656ULL;
long long int var_2 = -8930448588603509017LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -7439168160938462599LL;
int var_7 = -2025967740;
unsigned short var_9 = (unsigned short)16919;
int zero = 0;
unsigned long long int var_10 = 4416037752504939241ULL;
long long int var_11 = 3292056333512660625LL;
short var_12 = (short)8285;
short var_13 = (short)22246;
short var_14 = (short)-27630;
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
