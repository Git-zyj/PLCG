#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27397;
int var_4 = -676946460;
short var_7 = (short)20531;
unsigned short var_8 = (unsigned short)17970;
unsigned long long int var_11 = 3771313460394503721ULL;
int zero = 0;
unsigned long long int var_12 = 10630850633677597105ULL;
_Bool var_13 = (_Bool)1;
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
