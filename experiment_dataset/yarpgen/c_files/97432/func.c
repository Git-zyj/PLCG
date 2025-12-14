/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97432
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] |= ((/* implicit */short) max((((/* implicit */unsigned short) (short)-688)), ((unsigned short)13767)));
                    arr_8 [i_1] [i_0] [i_2] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_3) & (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) arr_5 [i_2 - 2])))))));
                    arr_10 [1U] [1U] [i_0] = ((/* implicit */long long int) (short)-17699);
                    arr_11 [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_5))))) ? (((var_13) >> (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) - (7817))))) : (min((arr_6 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */int) (short)1982)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned int) var_13)) - (var_16))) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) | (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */unsigned short) (-(var_9)));
    var_19 = ((/* implicit */int) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
