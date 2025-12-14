#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13000866487042073286ULL;
signed char var_2 = (signed char)41;
unsigned char var_4 = (unsigned char)139;
signed char var_6 = (signed char)-75;
int var_8 = 923157348;
unsigned char var_9 = (unsigned char)84;
unsigned short var_10 = (unsigned short)22784;
unsigned long long int var_11 = 12164009798253186732ULL;
unsigned short var_12 = (unsigned short)23584;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)153;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)6109;
unsigned char var_18 = (unsigned char)9;
int zero = 0;
signed char var_19 = (signed char)-102;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7340293102462421575ULL;
unsigned char var_22 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
