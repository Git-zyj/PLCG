#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2348777590924869143LL;
long long int var_8 = 2508639923320359388LL;
long long int var_9 = -5699121222778022024LL;
unsigned char var_13 = (unsigned char)121;
int zero = 0;
unsigned long long int var_19 = 3150304639722416674ULL;
int var_20 = -550989115;
short var_21 = (short)3301;
long long int var_22 = -1223313737191607466LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
