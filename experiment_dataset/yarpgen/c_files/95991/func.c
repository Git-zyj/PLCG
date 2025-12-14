/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95991
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [(short)12]))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -628079018)) ? (((/* implicit */int) (unsigned short)65530)) : (598855629)))) ? (((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) (unsigned char)177)))) : (arr_1 [i_0] [i_0])))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)5)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */int) var_5))))))));
                var_16 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) + (arr_1 [(unsigned char)5] [(signed char)20])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_13) == (var_13)))) : ((-((+(((/* implicit */int) (unsigned char)243))))))));
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
}
