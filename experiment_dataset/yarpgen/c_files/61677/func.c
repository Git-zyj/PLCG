/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61677
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 = ((((((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) min((var_9), (var_9)))) : (((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)17))))))) & ((((!(((/* implicit */_Bool) var_0)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_10), ((unsigned short)50289)))) - (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_7)) : (min((((/* implicit */int) min((var_9), (arr_2 [i_0] [i_1])))), (min((((/* implicit */int) var_2)), (var_8)))))));
                var_16 += ((/* implicit */unsigned char) min((((((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_17 = var_1;
}
