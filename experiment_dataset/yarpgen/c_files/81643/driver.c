#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52815;
long long int var_8 = -6559302698679343010LL;
long long int var_9 = -2982182357760143056LL;
int zero = 0;
unsigned short var_18 = (unsigned short)42698;
unsigned char var_19 = (unsigned char)145;
void init() {
}

void checksum() {
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
