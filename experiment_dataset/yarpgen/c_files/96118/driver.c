#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13050667839360893850ULL;
int var_2 = 8427144;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)787;
unsigned int var_7 = 1420762276U;
unsigned char var_9 = (unsigned char)126;
long long int var_12 = -7777120941061749921LL;
int zero = 0;
unsigned long long int var_16 = 14478686008254669338ULL;
long long int var_17 = -3571329247039027043LL;
unsigned short var_18 = (unsigned short)42732;
unsigned short var_19 = (unsigned short)17888;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
