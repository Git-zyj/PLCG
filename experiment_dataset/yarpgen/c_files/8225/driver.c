#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19987;
unsigned long long int var_6 = 15650430853060601331ULL;
long long int var_9 = 7531344630038010054LL;
unsigned short var_14 = (unsigned short)22816;
int zero = 0;
unsigned short var_17 = (unsigned short)21980;
short var_18 = (short)-32206;
long long int var_19 = -7968428602476418345LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
