#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27472;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)61;
unsigned long long int var_14 = 12017549088636641316ULL;
int zero = 0;
unsigned long long int var_20 = 12914381669493525041ULL;
unsigned char var_21 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
