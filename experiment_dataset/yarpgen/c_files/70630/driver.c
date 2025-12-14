#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)85;
signed char var_4 = (signed char)-4;
unsigned char var_5 = (unsigned char)170;
unsigned long long int var_10 = 10545616310874937738ULL;
int zero = 0;
long long int var_13 = -8821763348064563449LL;
short var_14 = (short)-27494;
void init() {
}

void checksum() {
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
