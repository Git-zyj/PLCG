#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1716348220;
short var_4 = (short)16915;
unsigned int var_6 = 3055427832U;
unsigned char var_9 = (unsigned char)181;
int zero = 0;
int var_18 = -1784043903;
unsigned short var_19 = (unsigned short)41592;
void init() {
}

void checksum() {
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
