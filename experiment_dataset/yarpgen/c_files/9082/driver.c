#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15602;
int var_2 = -371581020;
unsigned short var_6 = (unsigned short)47825;
int var_7 = -1525411361;
unsigned char var_9 = (unsigned char)117;
int zero = 0;
unsigned char var_11 = (unsigned char)57;
long long int var_12 = -1434458636679608472LL;
unsigned long long int var_13 = 13320034321111801073ULL;
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
