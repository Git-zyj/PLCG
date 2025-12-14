#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -395919723691739048LL;
long long int var_1 = 8546296443483835891LL;
unsigned long long int var_3 = 2941340323147315934ULL;
unsigned char var_4 = (unsigned char)75;
signed char var_8 = (signed char)-31;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
signed char var_16 = (signed char)-10;
short var_17 = (short)-25564;
void init() {
}

void checksum() {
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
