/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((var_3 && var_5) ? (max(468, 2643941684)) : (var_3 & var_1)))) ^ var_6)))));
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [16] [i_1 + 2] = ((((749877043 ? (-749877034 != var_10) : (~-333513486))) > ((((arr_3 [i_1 + 1] [i_1 - 1]) >= (arr_3 [i_1 + 1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = -20437;
                            arr_14 [20] [i_2] [i_0] [i_0] = ((var_2 != (arr_1 [i_3 - 1] [i_2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
