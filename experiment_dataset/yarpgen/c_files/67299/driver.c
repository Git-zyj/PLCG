#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11203812443787924856ULL;
short var_2 = (short)-18035;
unsigned long long int var_3 = 13502788597422579567ULL;
unsigned int var_6 = 3905336486U;
unsigned long long int var_7 = 6720500875556458238ULL;
unsigned short var_8 = (unsigned short)38380;
unsigned long long int var_11 = 11618051162879291849ULL;
int zero = 0;
signed char var_16 = (signed char)-70;
unsigned char var_17 = (unsigned char)41;
unsigned long long int var_18 = 886322794397555853ULL;
long long int var_19 = 149388017412007620LL;
long long int var_20 = 7417726964626647363LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
