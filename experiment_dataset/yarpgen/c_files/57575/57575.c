/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_11 ? var_8 : (var_7 | var_8))) - (1 % var_6)));
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] = (min((max((arr_6 [i_0] [i_1] [i_0 - 2]), 17592186044384)), ((max(var_11, (-2147483647 - 1))))));
                            arr_11 [i_0] [2] [i_2] [i_3] [18] = ((((((36378 ? -17592186044384 : -17592186044396)))) ? ((((((arr_3 [1] [1] [i_1]) && var_11))))) : ((~(arr_5 [i_0 - 2] [i_2])))));
                        }
                    }
                }
                arr_12 [6] [i_1] [i_1] = (var_3 && var_4);
                arr_13 [i_0 - 1] [i_1] [1] = ((-(arr_7 [i_1] [i_1] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [6] [i_1] [i_4 - 2] [i_4] [i_1] [i_0] = (~var_1);
                            arr_20 [i_1] [i_4 + 1] [i_1] [11] [i_0 + 1] [i_1] = ((var_2 ? (arr_5 [i_4 + 2] [i_4 + 1]) : 1));
                            arr_21 [10] [i_1] [i_4 + 1] [i_5] = var_0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
