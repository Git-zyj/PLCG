#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15457082820291669567ULL;
unsigned short var_2 = (unsigned short)31322;
long long int var_3 = -3620433487543668297LL;
unsigned short var_4 = (unsigned short)23522;
short var_9 = (short)31183;
short var_12 = (short)-11774;
unsigned long long int var_13 = 4563207650314533564ULL;
unsigned char var_14 = (unsigned char)125;
int zero = 0;
unsigned short var_15 = (unsigned short)30490;
int var_16 = -1027758267;
signed char var_17 = (signed char)54;
long long int var_18 = 3831523823417983300LL;
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
