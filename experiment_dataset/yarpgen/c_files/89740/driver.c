#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1334525598647580530ULL;
int var_4 = -217644177;
signed char var_5 = (signed char)-98;
unsigned short var_8 = (unsigned short)50219;
unsigned short var_15 = (unsigned short)31401;
long long int var_17 = 3365886789187378620LL;
int zero = 0;
int var_19 = 355926939;
unsigned short var_20 = (unsigned short)13356;
unsigned long long int var_21 = 17084371422222969345ULL;
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
