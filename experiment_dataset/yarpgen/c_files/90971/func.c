/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90971
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
    var_18 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)88)) > (((/* implicit */int) (unsigned char)167)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 3] [i_1] [i_0 + 3] = ((/* implicit */unsigned short) (+(((min((var_14), (((/* implicit */int) (unsigned short)7277)))) << (((((((/* implicit */int) (unsigned char)88)) >> (((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 2])) + (24))))) - (72)))))));
                arr_6 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32757)) != (((/* implicit */int) arr_3 [i_0] [i_0] [6U]))))), (2439658327U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_1] [(short)5])) : (((/* implicit */int) arr_1 [i_0 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_17)))) : ((+(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)7] [i_0] [i_0])))));
            }
        } 
    } 
}
