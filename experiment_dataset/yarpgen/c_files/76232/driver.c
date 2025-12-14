#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8237152739515541164LL;
short var_2 = (short)2816;
unsigned char var_4 = (unsigned char)64;
unsigned long long int var_5 = 12339144547618849539ULL;
unsigned long long int var_7 = 7326174151868565029ULL;
unsigned long long int var_8 = 17075570634421175805ULL;
unsigned short var_9 = (unsigned short)35461;
int zero = 0;
unsigned char var_13 = (unsigned char)52;
unsigned char var_14 = (unsigned char)121;
long long int var_15 = 307445763945742044LL;
unsigned short var_16 = (unsigned short)53064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
