#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3072581002U;
unsigned char var_1 = (unsigned char)106;
int var_3 = -1029439439;
int var_4 = 139976617;
int var_9 = 482679895;
unsigned int var_10 = 261022054U;
int var_11 = -1714182375;
unsigned int var_16 = 629460959U;
int zero = 0;
int var_17 = -2048975361;
unsigned int var_18 = 2214767526U;
unsigned int var_19 = 1266012852U;
unsigned int var_20 = 1060055989U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
