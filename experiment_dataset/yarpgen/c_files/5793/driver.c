#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)150;
short var_3 = (short)31235;
int var_5 = 958346796;
unsigned char var_6 = (unsigned char)104;
long long int var_9 = 1280978206596287704LL;
int zero = 0;
unsigned int var_16 = 3174347396U;
long long int var_17 = -5374452909268107376LL;
signed char var_18 = (signed char)26;
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
