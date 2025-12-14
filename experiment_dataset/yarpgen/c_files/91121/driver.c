#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1082218757892113383LL;
unsigned int var_3 = 325106873U;
int var_4 = 196347900;
unsigned char var_5 = (unsigned char)241;
unsigned short var_7 = (unsigned short)32544;
long long int var_9 = -3340693641973356892LL;
int zero = 0;
unsigned long long int var_16 = 8628592053015039249ULL;
long long int var_17 = -623182809531216083LL;
unsigned int var_18 = 7562757U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
