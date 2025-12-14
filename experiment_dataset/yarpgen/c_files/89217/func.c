/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89217
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */short) ((((/* implicit */int) (signed char)2)) == (((/* implicit */int) (unsigned char)0))));
    var_16 |= ((/* implicit */unsigned char) ((max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (short)27552)) : (((/* implicit */int) (short)27566))))))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (var_11) : (var_8))), (((/* implicit */int) min(((short)-27545), ((short)27552)))))))));
    var_17 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) % (min((((/* implicit */long long int) var_9)), (var_3)))))) - (min((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_12)) : (var_13)))))));
}
