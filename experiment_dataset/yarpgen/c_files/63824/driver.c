#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8420;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)111;
unsigned short var_9 = (unsigned short)53147;
long long int var_11 = -7761899501470945895LL;
int var_12 = 463013728;
int zero = 0;
short var_13 = (short)32290;
int var_14 = -1398926956;
long long int var_15 = -3947443105955033862LL;
short var_16 = (short)22118;
signed char var_17 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
