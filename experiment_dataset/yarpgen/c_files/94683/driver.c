#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
unsigned char var_4 = (unsigned char)47;
unsigned long long int var_5 = 2919639585416342707ULL;
unsigned char var_8 = (unsigned char)216;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
long long int var_11 = -1104050010303402067LL;
unsigned char var_12 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
