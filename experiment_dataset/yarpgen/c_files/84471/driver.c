#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4529864779168957305LL;
long long int var_4 = 2570489870661665525LL;
unsigned long long int var_5 = 2813215496742091425ULL;
unsigned long long int var_9 = 14057256865144719065ULL;
unsigned short var_10 = (unsigned short)1351;
unsigned short var_17 = (unsigned short)18923;
int zero = 0;
int var_20 = 210663196;
unsigned char var_21 = (unsigned char)252;
int var_22 = 1942883681;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
