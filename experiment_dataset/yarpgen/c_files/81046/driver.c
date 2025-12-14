#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
unsigned char var_2 = (unsigned char)202;
int var_4 = -596562254;
short var_5 = (short)-6445;
int var_9 = 1393748227;
long long int var_14 = 8993983869286711289LL;
signed char var_17 = (signed char)-56;
int zero = 0;
int var_18 = 852116833;
long long int var_19 = 5770121877060340071LL;
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
