#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11625690710657073670ULL;
unsigned long long int var_15 = 89092923676531003ULL;
unsigned long long int var_18 = 463553605710017532ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)25342;
int var_20 = -802559435;
short var_21 = (short)-11262;
unsigned char var_22 = (unsigned char)208;
unsigned char var_23 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
