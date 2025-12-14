#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-53;
unsigned long long int var_3 = 8454531541046588580ULL;
signed char var_4 = (signed char)78;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)243;
signed char var_10 = (signed char)9;
unsigned long long int var_11 = 4325223987934592600ULL;
long long int var_13 = 7072043276309204350LL;
unsigned char var_14 = (unsigned char)45;
int zero = 0;
unsigned long long int var_16 = 2608837810383222592ULL;
unsigned long long int var_17 = 1600952835514920621ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)13020;
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
