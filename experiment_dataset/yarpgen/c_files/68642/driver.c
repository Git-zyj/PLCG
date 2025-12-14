#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7928366417038333927LL;
unsigned int var_1 = 3600158627U;
unsigned int var_3 = 1468110360U;
long long int var_4 = 3382891733946074026LL;
int var_6 = -1072965986;
unsigned char var_7 = (unsigned char)183;
unsigned char var_9 = (unsigned char)49;
int zero = 0;
unsigned short var_10 = (unsigned short)46699;
long long int var_11 = 225817258812234661LL;
unsigned int var_12 = 754459828U;
unsigned long long int var_13 = 13420221206780123569ULL;
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
