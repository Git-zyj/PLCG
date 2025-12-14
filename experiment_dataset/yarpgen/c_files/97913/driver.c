#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 89699923U;
long long int var_6 = 4361438181433156362LL;
unsigned char var_9 = (unsigned char)85;
unsigned long long int var_13 = 10078607176939118110ULL;
int var_14 = 1576595948;
int zero = 0;
short var_16 = (short)8613;
signed char var_17 = (signed char)-35;
signed char var_18 = (signed char)92;
signed char var_19 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
