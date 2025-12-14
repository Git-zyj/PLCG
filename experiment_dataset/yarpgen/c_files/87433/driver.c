#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7991922969363953477LL;
unsigned char var_2 = (unsigned char)218;
unsigned char var_3 = (unsigned char)49;
unsigned int var_6 = 3574070206U;
short var_7 = (short)-11962;
long long int var_9 = -7030699595384678110LL;
int var_10 = 1828478495;
int zero = 0;
signed char var_16 = (signed char)-108;
int var_17 = -626403621;
unsigned int var_18 = 2665108493U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
