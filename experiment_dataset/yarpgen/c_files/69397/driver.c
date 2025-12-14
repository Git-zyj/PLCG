#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4582215280273307110LL;
unsigned char var_2 = (unsigned char)181;
signed char var_3 = (signed char)63;
long long int var_5 = 119227065374015577LL;
unsigned char var_7 = (unsigned char)212;
unsigned char var_9 = (unsigned char)128;
long long int var_10 = -5829953865528044422LL;
int zero = 0;
signed char var_12 = (signed char)43;
signed char var_13 = (signed char)-116;
short var_14 = (short)25045;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
