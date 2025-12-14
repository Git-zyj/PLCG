#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -789365862;
long long int var_3 = 5871102573714026583LL;
unsigned short var_4 = (unsigned short)12104;
unsigned short var_13 = (unsigned short)9031;
unsigned short var_17 = (unsigned short)49867;
int zero = 0;
long long int var_18 = -4579460072227275641LL;
long long int var_19 = 773921244587621734LL;
long long int var_20 = 7680248930842432916LL;
unsigned short var_21 = (unsigned short)47199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
