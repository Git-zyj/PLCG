#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7502997376611674808LL;
unsigned char var_6 = (unsigned char)186;
unsigned char var_9 = (unsigned char)19;
unsigned int var_11 = 487047604U;
int zero = 0;
unsigned short var_12 = (unsigned short)20309;
long long int var_13 = 4084296030922957259LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
