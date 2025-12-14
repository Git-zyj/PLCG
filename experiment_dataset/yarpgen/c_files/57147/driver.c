#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15619;
unsigned int var_6 = 353150683U;
unsigned long long int var_7 = 15687757307097560660ULL;
unsigned int var_8 = 2977439846U;
unsigned long long int var_12 = 7309035618237880931ULL;
int zero = 0;
unsigned long long int var_16 = 18190088455625348837ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)17010;
void init() {
}

void checksum() {
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
