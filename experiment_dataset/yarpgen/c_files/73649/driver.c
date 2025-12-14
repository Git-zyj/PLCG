#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4775;
signed char var_2 = (signed char)-9;
unsigned char var_6 = (unsigned char)144;
signed char var_8 = (signed char)36;
long long int var_9 = 230153187340108560LL;
int zero = 0;
signed char var_10 = (signed char)51;
unsigned short var_11 = (unsigned short)13637;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
