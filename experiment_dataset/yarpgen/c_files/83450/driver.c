#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1670769229U;
long long int var_6 = 1358996311960960239LL;
unsigned char var_8 = (unsigned char)69;
int zero = 0;
long long int var_14 = -9008502954524992876LL;
long long int var_15 = -3842880251264325694LL;
unsigned int var_16 = 423941412U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
