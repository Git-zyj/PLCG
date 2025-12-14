#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3697804904471377969LL;
unsigned short var_5 = (unsigned short)32816;
int var_6 = -95074051;
int var_8 = 1336606239;
unsigned long long int var_11 = 17618782176089375527ULL;
unsigned short var_14 = (unsigned short)37867;
int zero = 0;
long long int var_16 = -8192239100055402298LL;
int var_17 = -1447380174;
long long int var_18 = 1067965909087714739LL;
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
