#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4865016813354187329LL;
int var_1 = 2050259671;
unsigned char var_2 = (unsigned char)236;
unsigned short var_3 = (unsigned short)13120;
_Bool var_4 = (_Bool)1;
long long int var_6 = -1372688434122772403LL;
signed char var_7 = (signed char)-50;
short var_9 = (short)32651;
long long int var_10 = -7801063250580931681LL;
int var_11 = 1351032995;
short var_12 = (short)20511;
unsigned short var_13 = (unsigned short)7625;
int zero = 0;
int var_15 = 569886594;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4137223876506854520LL;
long long int var_18 = -7654035729898374470LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
