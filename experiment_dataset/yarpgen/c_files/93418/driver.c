#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5273591084917824670LL;
unsigned long long int var_12 = 2696883212481313302ULL;
int zero = 0;
int var_18 = -251237295;
unsigned long long int var_19 = 9206617801408992175ULL;
unsigned short var_20 = (unsigned short)62457;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
