#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7689251059794832274ULL;
int var_3 = 557856936;
int var_8 = 1076939635;
int var_9 = 1901660783;
short var_14 = (short)32514;
int zero = 0;
unsigned int var_17 = 967154211U;
int var_18 = 1407148302;
unsigned long long int var_19 = 1863976153908502874ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
