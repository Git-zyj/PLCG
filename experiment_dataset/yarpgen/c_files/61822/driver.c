#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)194;
long long int var_3 = -2181911784469077095LL;
unsigned char var_7 = (unsigned char)189;
short var_8 = (short)-24479;
_Bool var_9 = (_Bool)0;
long long int var_15 = -5893476309323458051LL;
unsigned char var_17 = (unsigned char)123;
long long int var_19 = -8500086621583997208LL;
int zero = 0;
unsigned int var_20 = 3345879910U;
unsigned char var_21 = (unsigned char)146;
int var_22 = 799010177;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
