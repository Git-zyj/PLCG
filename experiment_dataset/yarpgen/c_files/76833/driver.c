#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1211418086456372015LL;
int var_2 = 1091057129;
unsigned long long int var_3 = 9945483218916043064ULL;
unsigned char var_6 = (unsigned char)72;
unsigned long long int var_7 = 3991637950918502978ULL;
signed char var_11 = (signed char)52;
unsigned short var_12 = (unsigned short)46553;
long long int var_13 = 3455050872279591472LL;
int zero = 0;
signed char var_14 = (signed char)126;
unsigned short var_15 = (unsigned short)46199;
unsigned short var_16 = (unsigned short)31031;
unsigned long long int var_17 = 4778999980966224760ULL;
unsigned long long int var_18 = 13725579225795675459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
