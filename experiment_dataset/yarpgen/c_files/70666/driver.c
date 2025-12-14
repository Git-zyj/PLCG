#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3679444384433570299LL;
int var_9 = 828040022;
unsigned char var_10 = (unsigned char)203;
int zero = 0;
long long int var_20 = -6576239175472987219LL;
unsigned short var_21 = (unsigned short)15507;
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
