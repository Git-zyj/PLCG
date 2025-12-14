/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93887
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
    var_15 = var_12;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [(unsigned short)3] [i_0]);
            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_0] [i_1])) >= (((/* implicit */int) arr_6 [i_0] [i_1])))) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1])))));
        }
        var_19 *= ((/* implicit */signed char) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))))));
    }
    var_21 += ((/* implicit */signed char) var_3);
}
