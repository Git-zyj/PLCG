#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25124;
unsigned short var_7 = (unsigned short)46766;
long long int var_9 = 8206334129304434846LL;
unsigned char var_10 = (unsigned char)108;
long long int var_11 = -1296889461544711018LL;
int zero = 0;
unsigned short var_13 = (unsigned short)34825;
long long int var_14 = -3272234514778930506LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
