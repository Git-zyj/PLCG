#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1867024042;
unsigned long long int var_7 = 1198876711700585972ULL;
unsigned long long int var_8 = 6467968146801908810ULL;
signed char var_10 = (signed char)-63;
int zero = 0;
unsigned long long int var_11 = 15854089712518648235ULL;
unsigned short var_12 = (unsigned short)24510;
unsigned short var_13 = (unsigned short)40084;
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
