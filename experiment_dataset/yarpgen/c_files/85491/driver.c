#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3550140931159518079ULL;
signed char var_3 = (signed char)51;
unsigned long long int var_4 = 4353511801818514677ULL;
unsigned short var_5 = (unsigned short)33341;
unsigned short var_6 = (unsigned short)61109;
unsigned long long int var_8 = 96277957348719133ULL;
unsigned char var_9 = (unsigned char)19;
int zero = 0;
unsigned char var_12 = (unsigned char)28;
unsigned long long int var_13 = 14255592946733850782ULL;
unsigned char var_14 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
