/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83341
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
    var_20 += ((/* implicit */int) (((+(2147483647))) == (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) (signed char)-109)) / (((/* implicit */int) var_8)))) >> ((((~(((/* implicit */int) var_11)))) + (49903)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) (!(((/* implicit */_Bool) (+(var_16)))))))));
                    var_23 -= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [(signed char)4] [i_1] [i_2])) : ((+(((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)16] [i_1] [(unsigned short)6])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_3))))));
                    var_24 = (+(((/* implicit */int) ((max((arr_0 [i_1]), (((/* implicit */int) var_12)))) == (((/* implicit */int) arr_6 [i_0 + 1] [i_2] [i_2] [i_0 - 1]))))));
                }
                arr_7 [i_0] = ((/* implicit */unsigned short) var_6);
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) * (((/* implicit */int) var_13))))) ? (arr_0 [i_0]) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)65535))))))));
            }
        } 
    } 
}
