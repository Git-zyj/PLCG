#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2561203411693346705LL;
long long int var_1 = -5390109382987809721LL;
unsigned char var_2 = (unsigned char)31;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 4762259881992234018ULL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)41919;
long long int var_17 = -958211685751891300LL;
long long int var_18 = -7611020597761936133LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
