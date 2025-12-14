#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -825383604;
int var_6 = -1359468174;
unsigned short var_7 = (unsigned short)52333;
int var_8 = 724233105;
unsigned short var_10 = (unsigned short)31260;
int var_11 = 728206565;
int zero = 0;
unsigned short var_18 = (unsigned short)34636;
unsigned short var_19 = (unsigned short)47634;
unsigned short var_20 = (unsigned short)23777;
int var_21 = 548153309;
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
