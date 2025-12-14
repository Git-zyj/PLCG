/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97280
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
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_3)) : (var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) var_3))));
    var_15 = ((/* implicit */int) ((var_1) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) (signed char)16)))) : ((+(((/* implicit */int) (short)-8852)))))))));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (short)8852))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((unsigned char) (((+(((/* implicit */int) (short)16383)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8852)))))));
        var_18 |= ((/* implicit */unsigned char) var_2);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) (-(((arr_0 [i_1]) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((int) arr_2 [(unsigned char)14] [i_1])));
    }
}
