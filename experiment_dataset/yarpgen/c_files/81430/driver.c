#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
unsigned short var_3 = (unsigned short)8048;
long long int var_6 = 6074977257846038381LL;
short var_7 = (short)-25057;
unsigned short var_8 = (unsigned short)11436;
signed char var_9 = (signed char)27;
long long int var_11 = 2449621521364129436LL;
unsigned char var_13 = (unsigned char)146;
int zero = 0;
unsigned short var_18 = (unsigned short)13678;
unsigned long long int var_19 = 15013435074280894676ULL;
unsigned short var_20 = (unsigned short)49704;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
