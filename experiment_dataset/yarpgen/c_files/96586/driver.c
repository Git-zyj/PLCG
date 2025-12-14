#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 159410692780550099ULL;
short var_1 = (short)-10291;
long long int var_2 = 4075363230150080332LL;
long long int var_5 = -4206691818674276510LL;
unsigned int var_6 = 3624860533U;
unsigned long long int var_9 = 14776382750402677263ULL;
int zero = 0;
unsigned int var_10 = 2063574299U;
int var_11 = -1388707529;
long long int var_12 = -3931761078792834056LL;
short var_13 = (short)15703;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
