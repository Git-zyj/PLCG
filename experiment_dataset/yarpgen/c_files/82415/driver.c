#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 764200334021733831LL;
long long int var_1 = -2383125182085836347LL;
unsigned char var_4 = (unsigned char)84;
long long int var_5 = 7752085124879621553LL;
int var_6 = 1343391483;
long long int var_7 = 4367929253480258875LL;
signed char var_8 = (signed char)-7;
short var_9 = (short)4132;
unsigned long long int var_10 = 2543826067645756659ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)65123;
short var_15 = (short)-15764;
unsigned short var_16 = (unsigned short)63586;
unsigned char var_17 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
