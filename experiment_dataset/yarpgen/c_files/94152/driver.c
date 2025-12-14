#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4028978235432200171ULL;
int var_1 = 1874241653;
unsigned long long int var_2 = 9267050780604328305ULL;
short var_3 = (short)23375;
long long int var_4 = 7215564227047206648LL;
int var_5 = 1935378318;
short var_6 = (short)-13328;
int var_7 = 878754245;
unsigned int var_10 = 2651489358U;
unsigned char var_11 = (unsigned char)72;
unsigned long long int var_12 = 697973965154046793ULL;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)41;
unsigned long long int var_17 = 8615988930616078758ULL;
void init() {
}

void checksum() {
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
