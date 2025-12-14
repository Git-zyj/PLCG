#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4482501620403880377LL;
signed char var_1 = (signed char)106;
unsigned short var_2 = (unsigned short)40727;
long long int var_3 = -8387225565332232397LL;
int var_7 = -1721328385;
long long int var_9 = 4907276485963120138LL;
unsigned long long int var_10 = 9458608392394211342ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)64704;
unsigned long long int var_12 = 6928688514232771353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
