/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((max((max(var_17, var_2)), ((max(-35, var_3))))), (max(var_14, var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (~((((((arr_6 [i_3] [i_4] [i_2] [i_3]) ^ -21740))) ? (arr_5 [i_4] [19]) : (arr_2 [i_0] [i_1]))));
                                var_20 = ((+(((arr_9 [i_0] [i_1] [i_2 + 2]) ? var_7 : (arr_9 [i_0] [i_2 + 1] [i_3])))));
                            }
                        }
                    }
                    var_21 = ((((min((arr_11 [i_0] [i_2 + 2] [17] [i_2]), (arr_6 [i_0] [i_2 + 2] [i_2 - 1] [i_2])))) ? ((var_6 + (arr_8 [i_0] [i_2 + 2] [i_2]))) : ((min((arr_8 [i_0] [i_2 + 1] [i_2 - 1]), (arr_8 [i_0] [i_2 - 1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
