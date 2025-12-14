#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4752048362650110846LL;
signed char var_6 = (signed char)-88;
long long int var_7 = -1360784963333779473LL;
long long int var_9 = 7846678246043526805LL;
unsigned char var_10 = (unsigned char)51;
int var_11 = 1072649886;
unsigned long long int var_13 = 14329263688560108675ULL;
unsigned long long int var_15 = 2761792721704892456ULL;
int zero = 0;
int var_16 = 412783720;
unsigned int var_17 = 405429747U;
signed char var_18 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
