#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3748;
unsigned long long int var_4 = 8239414543853179487ULL;
short var_14 = (short)-3374;
unsigned char var_15 = (unsigned char)104;
int var_16 = 976613117;
unsigned long long int var_18 = 11317907091010598701ULL;
int zero = 0;
unsigned int var_19 = 1454154200U;
unsigned int var_20 = 319168480U;
unsigned long long int var_21 = 16010828638957565538ULL;
void init() {
}

void checksum() {
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
