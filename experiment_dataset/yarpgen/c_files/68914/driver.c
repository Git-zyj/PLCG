#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)126;
long long int var_12 = -6383547128470603863LL;
int zero = 0;
unsigned long long int var_17 = 12122364140926175050ULL;
unsigned char var_18 = (unsigned char)146;
unsigned short var_19 = (unsigned short)44006;
unsigned char var_20 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
