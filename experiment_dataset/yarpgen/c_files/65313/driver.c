#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 530324796821043885LL;
short var_1 = (short)-31489;
short var_3 = (short)-7554;
long long int var_6 = -8085303094930926265LL;
unsigned long long int var_7 = 15923088580785480032ULL;
short var_8 = (short)-2879;
signed char var_13 = (signed char)-68;
int zero = 0;
long long int var_17 = -8291305998791860694LL;
unsigned long long int var_18 = 4789725300366241411ULL;
unsigned short var_19 = (unsigned short)15973;
void init() {
}

void checksum() {
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
