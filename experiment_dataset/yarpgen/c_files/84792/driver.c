#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12734;
unsigned short var_5 = (unsigned short)52322;
unsigned char var_9 = (unsigned char)27;
unsigned char var_11 = (unsigned char)24;
unsigned short var_12 = (unsigned short)54885;
int zero = 0;
unsigned short var_20 = (unsigned short)38968;
unsigned long long int var_21 = 3412413062554612943ULL;
long long int var_22 = -4851571162979495686LL;
long long int var_23 = 6403816377119566111LL;
unsigned short var_24 = (unsigned short)29739;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
