#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14292;
unsigned short var_3 = (unsigned short)60391;
signed char var_5 = (signed char)-105;
long long int var_8 = -4486358917918772934LL;
unsigned int var_18 = 3052755772U;
int zero = 0;
long long int var_20 = 7002463006140444751LL;
short var_21 = (short)14331;
unsigned char var_22 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
