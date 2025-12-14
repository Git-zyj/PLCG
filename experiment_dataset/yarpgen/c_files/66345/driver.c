#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38992;
unsigned char var_4 = (unsigned char)7;
int var_5 = -407779547;
int var_6 = -2018097356;
int var_8 = -2078817653;
int var_9 = -2098918759;
int zero = 0;
unsigned long long int var_10 = 16333191186527726983ULL;
unsigned int var_11 = 2617221358U;
unsigned char var_12 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
