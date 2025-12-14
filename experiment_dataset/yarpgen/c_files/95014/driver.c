#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61656;
unsigned char var_2 = (unsigned char)212;
short var_5 = (short)-8336;
long long int var_8 = 2274219624328109289LL;
long long int var_16 = 5726852518797859357LL;
int zero = 0;
long long int var_17 = -7694072132995366388LL;
unsigned char var_18 = (unsigned char)30;
void init() {
}

void checksum() {
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
