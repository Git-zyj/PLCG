#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-56;
unsigned long long int var_8 = 12098676318378145877ULL;
unsigned long long int var_14 = 708089610993619650ULL;
long long int var_18 = 5956774396739788168LL;
int zero = 0;
int var_20 = -1785603480;
unsigned short var_21 = (unsigned short)20591;
unsigned long long int var_22 = 26742995009410187ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
