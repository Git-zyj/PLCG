#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -181505238;
unsigned char var_9 = (unsigned char)243;
long long int var_11 = 990023598039018362LL;
unsigned char var_12 = (unsigned char)146;
int zero = 0;
unsigned long long int var_18 = 12589528652636081866ULL;
unsigned long long int var_19 = 66120333110912321ULL;
int var_20 = -2131724496;
void init() {
}

void checksum() {
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
