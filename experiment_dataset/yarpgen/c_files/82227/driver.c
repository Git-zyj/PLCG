#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
unsigned char var_6 = (unsigned char)100;
unsigned int var_7 = 3484247210U;
int var_11 = 769021102;
long long int var_12 = 7833157291195909036LL;
int zero = 0;
signed char var_20 = (signed char)56;
int var_21 = -1755744345;
unsigned long long int var_22 = 5438257105477756991ULL;
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
