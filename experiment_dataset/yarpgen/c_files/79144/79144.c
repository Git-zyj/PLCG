/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_12 = ((((var_4 ? ((-1 ? 95 : var_6)) : 3)) ^ 1));
        arr_3 [i_0] = ((-(arr_1 [i_0 + 3])));
        arr_4 [i_0 - 2] [i_0] = ((~(((max(var_7, 181))))));
    }
    var_13 &= (((!var_1) ? (123 / 164) : (((-78 % 120) ? (!var_8) : (!21)))));
    var_14 = (0 * -255);
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_1, (((arr_17 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1]) * (arr_17 [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1])))));
                                arr_19 [i_3] = ((-5 ? 81 : 1));
                                arr_20 [i_1] [i_3] [i_1 - 1] [i_3] [i_3] = (min((!236), (arr_17 [i_5 - 1] [i_3 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (((~(-1 < var_11))))));
            }
        }
    }
    var_17 = (((var_7 >> var_3) % -30));
    #pragma endscop
}
