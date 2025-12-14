/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((!(((-(arr_8 [i_0] [3] [i_0] [i_3] [4] [4] [i_0])))))) ? ((((((arr_1 [i_0]) | var_2))) ? (max(-3740093438483954626, -1714804176774374938)) : ((max(2345325969, 125))))) : ((min(((-(arr_8 [i_4] [11] [i_2] [8] [0] [i_0] [i_0]))), 0))))))));
                                var_13 = (min(((min(0, (max(var_8, var_5))))), ((-846307030278618707 ? (arr_4 [i_4] [i_0] [i_0]) : ((71 ? 1 : 59463))))));
                                arr_11 [i_0] [1] [i_2] [i_3] [i_4] [i_4] = (arr_3 [i_0]);
                                var_14 = (max((arr_4 [i_4] [i_3] [i_0]), (arr_2 [i_0] [i_1 + 1])));
                            }
                        }
                    }
                    arr_12 [i_0] = (((arr_5 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? ((((var_8 * (arr_3 [i_1]))) & ((-3740093438483954626 % (arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (arr_8 [i_0] [i_0] [i_1] [1] [i_2] [3] [i_2])));
                }
            }
        }
    }
    var_15 += var_1;
    var_16 = var_5;
    var_17 = var_11;
    var_18 = (15014065284973433205 / ((max(-var_5, ((var_5 ? var_4 : 1421947545))))));
    #pragma endscop
}
