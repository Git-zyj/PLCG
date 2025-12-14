#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14634;
unsigned int var_1 = 3551639409U;
int var_2 = 255611433;
unsigned short var_3 = (unsigned short)36396;
long long int var_4 = 3387582453390270775LL;
signed char var_7 = (signed char)-90;
short var_9 = (short)-26536;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3971974944341046506ULL;
int zero = 0;
short var_13 = (short)-14722;
unsigned char var_14 = (unsigned char)203;
unsigned short var_15 = (unsigned short)29028;
unsigned short var_16 = (unsigned short)38431;
unsigned short var_17 = (unsigned short)54305;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
