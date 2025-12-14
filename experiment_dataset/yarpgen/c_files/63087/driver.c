#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3873318861016617879LL;
long long int var_1 = -8001463634579579451LL;
unsigned short var_2 = (unsigned short)25047;
unsigned int var_4 = 752147301U;
long long int var_5 = -5382311604847575162LL;
unsigned long long int var_7 = 3585094212821878121ULL;
signed char var_8 = (signed char)19;
unsigned short var_9 = (unsigned short)18294;
int zero = 0;
short var_11 = (short)31156;
unsigned long long int var_12 = 11567526899596973878ULL;
unsigned char var_13 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
