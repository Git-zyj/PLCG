/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7861
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
    var_11 = ((signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)-125)) % (((/* implicit */int) var_8)))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = max(((signed char)0), ((signed char)-127));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_12 = max(((signed char)4), ((signed char)(-127 - 1)));
        var_13 = var_9;
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((signed char) min((var_10), (var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_5 [i_1 - 1] [i_1 - 1]))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (var_9)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (signed char)34)) << (((((/* implicit */int) (signed char)-127)) + (138)))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) var_0)))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) ((((((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)-34)))) & ((+(((/* implicit */int) var_6)))))) / (((/* implicit */int) ((signed char) ((signed char) var_4))))));
}
