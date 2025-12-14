#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25048;
unsigned char var_4 = (unsigned char)75;
unsigned long long int var_13 = 13963854839180101356ULL;
int var_16 = 1979767353;
int zero = 0;
short var_17 = (short)-10249;
long long int var_18 = 59611871059165546LL;
int var_19 = -1817989984;
int var_20 = -284220634;
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
