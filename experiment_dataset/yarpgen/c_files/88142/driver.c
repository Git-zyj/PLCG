#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4437849827136401347LL;
unsigned short var_7 = (unsigned short)63312;
int var_15 = 1070132650;
int zero = 0;
long long int var_18 = -819148784060168372LL;
unsigned long long int var_19 = 15223526915403411662ULL;
signed char var_20 = (signed char)-52;
unsigned long long int var_21 = 15713688093778740043ULL;
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
