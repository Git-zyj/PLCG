#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -5204445799194266074LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)-32627;
unsigned long long int var_20 = 15473684640015674242ULL;
long long int var_21 = 3425077604156843088LL;
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
