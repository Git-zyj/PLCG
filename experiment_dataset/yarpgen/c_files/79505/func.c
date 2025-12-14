/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79505
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6))));
        var_14 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (9223372036854775780LL) : (9223372036854775754LL))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 = ((/* implicit */unsigned int) 9223372036854775781LL);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-9223372036854775775LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3357010184606672203LL)) ? (((/* implicit */int) (signed char)-122)) : (-1690896370)))) : (((((/* implicit */_Bool) 1117986652)) ? (3452534941380109498ULL) : (((/* implicit */unsigned long long int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775780LL)) ? (((/* implicit */long long int) 15)) : (9223372036854775780LL)))) ? (((unsigned long long int) -282025351)) : (((/* implicit */unsigned long long int) ((((-9223372036854775788LL) + (9223372036854775807LL))) << (27)))))) : (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) >> (((4294967289U) - (4294967243U))))))));
}
