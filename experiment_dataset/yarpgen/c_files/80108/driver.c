#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31894;
unsigned char var_4 = (unsigned char)95;
int var_5 = -1596490452;
unsigned int var_6 = 964579211U;
unsigned long long int var_8 = 3428362363745476303ULL;
unsigned int var_10 = 39969135U;
int zero = 0;
long long int var_12 = 340562452492505664LL;
int var_13 = 1170422374;
void init() {
}

void checksum() {
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
