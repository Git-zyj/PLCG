/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55033
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_5);
    }
    var_17 = ((/* implicit */int) (short)12288);
    var_18 *= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_15)))) || ((!(((/* implicit */_Bool) var_13))))))) >> (((min((((/* implicit */int) max((var_12), (var_4)))), ((~(((/* implicit */int) var_11)))))) + (62712)))));
}
