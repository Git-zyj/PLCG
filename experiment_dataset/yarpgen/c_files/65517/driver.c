#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29776;
short var_1 = (short)-10793;
unsigned char var_3 = (unsigned char)33;
long long int var_5 = 3437374720471872294LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_12 = -1291621910;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
long long int var_16 = 4717741112433838079LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
