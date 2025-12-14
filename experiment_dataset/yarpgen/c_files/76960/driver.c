#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1511;
unsigned long long int var_5 = 5312280666104848369ULL;
int var_6 = 231211724;
short var_7 = (short)-27784;
unsigned short var_8 = (unsigned short)29730;
signed char var_9 = (signed char)-52;
unsigned long long int var_10 = 7692891814869040606ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)169;
unsigned char var_12 = (unsigned char)105;
unsigned short var_13 = (unsigned short)34238;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
