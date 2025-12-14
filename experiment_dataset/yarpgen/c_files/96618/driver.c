#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)68;
unsigned char var_4 = (unsigned char)79;
unsigned short var_5 = (unsigned short)47553;
signed char var_6 = (signed char)-62;
signed char var_7 = (signed char)9;
int var_8 = -1871122827;
int zero = 0;
unsigned long long int var_12 = 7374264593814906423ULL;
unsigned short var_13 = (unsigned short)55792;
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
