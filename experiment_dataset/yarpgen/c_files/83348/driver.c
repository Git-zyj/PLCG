#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19185;
long long int var_4 = 28017805217809600LL;
short var_7 = (short)-25316;
short var_8 = (short)25641;
unsigned char var_9 = (unsigned char)104;
unsigned char var_11 = (unsigned char)39;
unsigned int var_13 = 440317528U;
int zero = 0;
unsigned int var_18 = 209189572U;
unsigned int var_19 = 610259509U;
short var_20 = (short)-4101;
unsigned short var_21 = (unsigned short)51234;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
