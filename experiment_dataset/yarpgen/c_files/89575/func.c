/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89575
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = max(((signed char)-44), ((signed char)70));
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_9)))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (131)))))) ? (((((/* implicit */int) ((signed char) arr_1 [(signed char)8]))) * ((~(((/* implicit */int) (signed char)-39)))))) : (((((/* implicit */int) max((var_10), (arr_0 [i_0])))) / (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_8 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
        var_13 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [(signed char)13])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_0))))));
    }
    var_14 = var_10;
    var_15 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
}
