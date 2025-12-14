#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2714547108U;
long long int var_9 = -8981421515306359330LL;
signed char var_15 = (signed char)-103;
long long int var_16 = 5574573432959150453LL;
unsigned char var_18 = (unsigned char)238;
int zero = 0;
unsigned long long int var_19 = 2297025494393427649ULL;
short var_20 = (short)-15219;
unsigned long long int var_21 = 2339410466426215175ULL;
unsigned short var_22 = (unsigned short)56843;
signed char var_23 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
