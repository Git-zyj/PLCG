/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99286
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
    var_18 = ((/* implicit */signed char) var_16);
    var_19 = var_12;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] = (((+((+(var_5))))) & (var_5));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_0] = ((/* implicit */signed char) (-(arr_2 [i_1] [i_2])));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] &= (short)4256;
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_2))));
                    }
                    for (short i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10523)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11712)))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_9 [i_4 - 3] [i_2 + 2] [i_1 - 2] [(short)8])) : (((/* implicit */int) arr_4 [i_0]))));
                    }
                }
                arr_16 [i_1] [i_1 - 1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11712))) : (4294967281U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11712))) : (1550107702U)));
            }
        } 
    } 
}
