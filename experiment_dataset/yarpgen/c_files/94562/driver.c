#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17624;
unsigned long long int var_4 = 7730923872986151856ULL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 6779496932625153127LL;
unsigned short var_9 = (unsigned short)12485;
int var_14 = 1535409816;
unsigned long long int var_15 = 3228442847690922297ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)17733;
int var_18 = 1300175771;
unsigned short var_19 = (unsigned short)22353;
int var_20 = 1429666546;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
