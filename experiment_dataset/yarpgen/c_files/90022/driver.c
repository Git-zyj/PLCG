#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)182;
short var_8 = (short)6163;
unsigned short var_9 = (unsigned short)12457;
signed char var_10 = (signed char)-69;
int zero = 0;
int var_12 = -1751351367;
short var_13 = (short)-1411;
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
