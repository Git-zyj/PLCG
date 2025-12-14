/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84151
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = (~(((/* implicit */int) (signed char)52)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) & (arr_1 [i_1])));
                        var_13 = var_7;
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */short) (signed char)30))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((min((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (var_7)))))) % (((/* implicit */unsigned int) var_6)))))));
}
