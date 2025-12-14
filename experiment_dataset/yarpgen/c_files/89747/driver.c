#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8722905687035112362LL;
long long int var_8 = 3942114981570420335LL;
unsigned short var_11 = (unsigned short)9498;
short var_12 = (short)11083;
unsigned short var_13 = (unsigned short)15196;
long long int var_15 = -8040642616478567649LL;
int zero = 0;
unsigned short var_19 = (unsigned short)39882;
unsigned int var_20 = 570849061U;
void init() {
}

void checksum() {
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
