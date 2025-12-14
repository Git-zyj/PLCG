#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2383170880091840479LL;
unsigned char var_4 = (unsigned char)18;
long long int var_5 = 6570280539908057284LL;
long long int var_6 = 6793591024437620930LL;
unsigned short var_8 = (unsigned short)40759;
long long int var_9 = -6344893232186243021LL;
unsigned long long int var_13 = 5718618504526289897ULL;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
int var_17 = 1848451859;
int var_18 = -1043914309;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
