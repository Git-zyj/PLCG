#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1810780445;
unsigned char var_3 = (unsigned char)161;
long long int var_4 = -300796539609371640LL;
long long int var_5 = 1977717559173820610LL;
unsigned short var_6 = (unsigned short)35499;
signed char var_7 = (signed char)116;
long long int var_8 = 7104166432057780719LL;
int zero = 0;
unsigned char var_10 = (unsigned char)245;
unsigned short var_11 = (unsigned short)14634;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
