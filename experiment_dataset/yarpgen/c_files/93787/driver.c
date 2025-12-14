#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
short var_1 = (short)-27939;
int var_4 = 747703448;
short var_7 = (short)10624;
short var_8 = (short)-5061;
int var_9 = -535004370;
unsigned short var_14 = (unsigned short)41462;
int var_17 = 1246210761;
short var_18 = (short)-13994;
int zero = 0;
short var_19 = (short)19939;
signed char var_20 = (signed char)-97;
void init() {
}

void checksum() {
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
