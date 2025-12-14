#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -640646026356119421LL;
unsigned char var_2 = (unsigned char)134;
long long int var_6 = -4709424148102921094LL;
long long int var_7 = -929085816896804888LL;
unsigned char var_9 = (unsigned char)199;
unsigned long long int var_10 = 17448327592438956753ULL;
unsigned char var_12 = (unsigned char)215;
unsigned short var_13 = (unsigned short)40138;
int zero = 0;
unsigned char var_14 = (unsigned char)31;
unsigned short var_15 = (unsigned short)38933;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
