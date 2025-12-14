/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 += (min((arr_2 [i_1 + 1] [i_2]), (arr_6 [6] [i_1 + 1] [i_1] [i_1 + 1] [6])));
                            var_16 *= ((((var_13 < (((arr_7 [i_0] [i_1] [i_0] [2] [i_3] [i_3]) ^ (arr_5 [i_1] [4]))))) ? (((511 ? 100 : 65019))) : ((-6318 ? 510 : -6179068826600834780))));
                            var_17 = (arr_2 [i_1 + 1] [i_1 + 1]);
                        }
                    }
                }
                var_18 &= (49152 / 1);
                var_19 = (max(var_19, ((((((var_8 + (arr_5 [i_0] [4])))) > (((arr_5 [i_0] [12]) / var_9)))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (~49147);
                    arr_11 [i_0] [i_0] [i_0] [i_4] = (arr_0 [i_0] [i_0]);
                    arr_12 [i_0] [i_0] [i_0] = -1957533064;
                    var_20 = (max(var_20, var_7));
                }
            }
        }
    }
    var_21 = ((((var_13 ? 69388338119152993 : -1957533064)) <= var_0));
    var_22 = var_9;
    #pragma endscop
}
