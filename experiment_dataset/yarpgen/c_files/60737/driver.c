#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16015057747817611109ULL;
long long int var_6 = 1968910153024192750LL;
signed char var_7 = (signed char)-43;
unsigned char var_9 = (unsigned char)108;
int zero = 0;
unsigned short var_10 = (unsigned short)27261;
unsigned short var_11 = (unsigned short)15358;
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
