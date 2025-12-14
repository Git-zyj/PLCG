#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1669572281;
long long int var_9 = 5895612493829065440LL;
unsigned short var_10 = (unsigned short)19635;
int zero = 0;
long long int var_19 = 6073415876045725287LL;
long long int var_20 = 7046864289198545183LL;
unsigned short var_21 = (unsigned short)54764;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
