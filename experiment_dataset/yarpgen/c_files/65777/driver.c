#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16500;
unsigned short var_2 = (unsigned short)59966;
unsigned long long int var_5 = 18001216134564123485ULL;
unsigned short var_6 = (unsigned short)52849;
signed char var_7 = (signed char)-41;
unsigned int var_9 = 2656704264U;
signed char var_10 = (signed char)9;
int zero = 0;
short var_15 = (short)29447;
unsigned long long int var_16 = 3949698761688139980ULL;
signed char var_17 = (signed char)41;
unsigned char var_18 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
