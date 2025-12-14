#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5381506624989842525LL;
unsigned char var_4 = (unsigned char)6;
signed char var_9 = (signed char)-67;
unsigned int var_13 = 798642186U;
int zero = 0;
long long int var_19 = 4020204303461750819LL;
long long int var_20 = -5375081081431201689LL;
int var_21 = -1600939006;
void init() {
}

void checksum() {
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
