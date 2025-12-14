#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8682347202192628125ULL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-54;
short var_8 = (short)-23975;
signed char var_9 = (signed char)50;
unsigned long long int var_12 = 8127809666608235775ULL;
unsigned long long int var_17 = 16024991727697414706ULL;
int zero = 0;
unsigned long long int var_18 = 1653789167892564348ULL;
unsigned short var_19 = (unsigned short)196;
unsigned short var_20 = (unsigned short)8721;
short var_21 = (short)11167;
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
