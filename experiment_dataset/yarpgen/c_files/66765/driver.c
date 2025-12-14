#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15200;
short var_1 = (short)12455;
short var_2 = (short)22495;
int var_4 = -50633287;
long long int var_5 = 1501811364494313027LL;
int var_6 = -1002714714;
_Bool var_7 = (_Bool)0;
long long int var_8 = -2723665382702662192LL;
unsigned int var_10 = 1198019887U;
signed char var_11 = (signed char)90;
unsigned long long int var_12 = 14844091907644317634ULL;
unsigned short var_14 = (unsigned short)38584;
unsigned long long int var_15 = 8368604526298507658ULL;
unsigned long long int var_16 = 2218823787109017841ULL;
long long int var_17 = -2140839317818847168LL;
int zero = 0;
signed char var_18 = (signed char)-49;
unsigned long long int var_19 = 9307055285336746234ULL;
unsigned long long int var_20 = 2529019993302162000ULL;
signed char var_21 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
