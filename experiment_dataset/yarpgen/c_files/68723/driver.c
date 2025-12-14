#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned short var_1 = (unsigned short)37042;
signed char var_2 = (signed char)-90;
signed char var_3 = (signed char)69;
unsigned long long int var_9 = 8224056062374010290ULL;
signed char var_11 = (signed char)-84;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
unsigned char var_20 = (unsigned char)72;
unsigned long long int var_21 = 5952871788356419629ULL;
void init() {
}

void checksum() {
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
