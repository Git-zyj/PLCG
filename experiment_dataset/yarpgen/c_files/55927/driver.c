#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14878;
int var_1 = -1091587588;
unsigned long long int var_2 = 8267241149364617047ULL;
unsigned long long int var_3 = 4059840875481761916ULL;
int var_4 = -132762703;
unsigned int var_5 = 3721728232U;
long long int var_6 = -4592283837206970545LL;
short var_7 = (short)-4456;
unsigned long long int var_8 = 9544294793545913516ULL;
unsigned int var_9 = 2464005176U;
signed char var_10 = (signed char)-123;
int var_11 = -676542869;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3719071189U;
signed char var_14 = (signed char)27;
unsigned long long int var_15 = 460448551699601223ULL;
int var_16 = 1341066791;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
