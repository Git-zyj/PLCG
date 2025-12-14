#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
long long int var_1 = 9146408759761801279LL;
signed char var_5 = (signed char)-109;
unsigned char var_6 = (unsigned char)202;
long long int var_8 = -5319113094897408645LL;
unsigned char var_9 = (unsigned char)219;
int zero = 0;
unsigned int var_10 = 202094905U;
int var_11 = -1374047792;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
