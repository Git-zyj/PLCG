#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10800727062595345941ULL;
unsigned long long int var_3 = 12685333517705816329ULL;
long long int var_9 = 1758878384314188730LL;
unsigned long long int var_13 = 16514975217985837412ULL;
unsigned long long int var_14 = 14871541150946231490ULL;
int zero = 0;
unsigned long long int var_15 = 5810061828130175925ULL;
short var_16 = (short)-76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
