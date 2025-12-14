#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23725;
short var_3 = (short)11062;
unsigned long long int var_4 = 11050068930638436206ULL;
unsigned char var_6 = (unsigned char)76;
unsigned int var_8 = 1339475491U;
int zero = 0;
unsigned int var_11 = 1406322269U;
signed char var_12 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
