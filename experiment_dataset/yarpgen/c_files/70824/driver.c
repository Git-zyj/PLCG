#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1236751047670538764LL;
unsigned long long int var_5 = 9349008843406480958ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2451799132485547021LL;
short var_9 = (short)13564;
unsigned char var_11 = (unsigned char)37;
int zero = 0;
short var_12 = (short)-10525;
long long int var_13 = -1968464046688963094LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
