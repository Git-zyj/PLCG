#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4290895275174161742LL;
short var_4 = (short)-25238;
unsigned char var_6 = (unsigned char)113;
int zero = 0;
long long int var_11 = 1061293602619166683LL;
int var_12 = -665981372;
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
