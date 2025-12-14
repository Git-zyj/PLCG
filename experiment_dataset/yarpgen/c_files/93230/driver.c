#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
int var_4 = 58532202;
int var_9 = -383883130;
int var_13 = -896252750;
int zero = 0;
unsigned long long int var_17 = 2096273937217729557ULL;
unsigned short var_18 = (unsigned short)19578;
unsigned long long int var_19 = 4483858035606907315ULL;
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
