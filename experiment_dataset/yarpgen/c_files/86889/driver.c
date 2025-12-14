#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5779801155501720372LL;
long long int var_3 = -9080929186212056298LL;
long long int var_4 = -3248479324026986675LL;
int var_5 = -1567230288;
signed char var_6 = (signed char)-29;
unsigned char var_7 = (unsigned char)199;
unsigned long long int var_9 = 11967921914322726502ULL;
int zero = 0;
signed char var_10 = (signed char)-71;
unsigned short var_11 = (unsigned short)50763;
unsigned char var_12 = (unsigned char)16;
short var_13 = (short)6624;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
