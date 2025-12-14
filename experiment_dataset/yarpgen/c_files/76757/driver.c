#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned long long int var_3 = 924931809840835294ULL;
int var_4 = 767774877;
int var_5 = 2074783384;
int var_7 = 1929445467;
unsigned int var_9 = 4266150554U;
unsigned short var_12 = (unsigned short)41880;
unsigned char var_15 = (unsigned char)216;
unsigned int var_16 = 304051264U;
int var_17 = 1189977058;
int zero = 0;
unsigned int var_18 = 2869136535U;
unsigned short var_19 = (unsigned short)51617;
void init() {
}

void checksum() {
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
