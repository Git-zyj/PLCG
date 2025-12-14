/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90777
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
    var_10 &= ((/* implicit */int) ((((/* implicit */int) (signed char)118)) >= (((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)62)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) (-(3909891521U)))), (min((var_5), (((/* implicit */unsigned long long int) (short)-28138)))))) - (14941926581483743625ULL)))));
        var_11 += ((/* implicit */unsigned short) var_7);
    }
    var_12 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)41194)) : (((/* implicit */int) var_7))));
}
