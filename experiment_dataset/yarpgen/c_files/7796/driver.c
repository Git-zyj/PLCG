#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)45;
unsigned short var_3 = (unsigned short)24775;
unsigned char var_7 = (unsigned char)109;
unsigned int var_13 = 726350699U;
short var_18 = (short)-2788;
int zero = 0;
unsigned long long int var_20 = 16101200295393515346ULL;
unsigned long long int var_21 = 6767193846184752448ULL;
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
