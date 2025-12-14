/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(-var_6, (((var_11 ? -12460 : var_11)))))) % (((1083087089 >> (var_12 - 1275298413))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_0] [i_2] [i_1] [i_3] = (((arr_6 [i_2] [i_2] [i_2 - 1]) ? var_5 : (max((arr_6 [i_1] [i_2] [i_2 + 2]), (arr_6 [i_2] [i_2 - 1] [i_2 - 2])))));
                            var_15 = max((((34 - (arr_9 [i_2 + 2] [6] [i_2] [i_2 + 2] [9] [i_1])))), var_1);
                            var_16 = arr_1 [i_2 - 1];
                            var_17 = (max(-var_2, ((-7150883461592699140 ? (((max(0, 148)))) : (arr_6 [10] [i_1] [i_2 + 1])))));
                            var_18 = ((+(((var_13 || -1) ? -2838 : (!var_11)))));
                        }
                    }
                }
                var_19 = (max(((((-32767 - 1) ? var_10 : (arr_9 [i_1] [i_1] [4] [i_0] [i_1] [i_0])))), (arr_1 [i_1])));
            }
        }
    }
    var_20 = (min(var_0, var_10));
    #pragma endscop
}
