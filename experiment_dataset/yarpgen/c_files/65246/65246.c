/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((var_12 ? var_5 : var_12)) ? var_7 : (max(4294967295, 12))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((arr_5 [i_4] [i_2] [i_1] [i_0]) ? ((((!((((arr_1 [i_0] [10]) ? var_5 : (arr_0 [i_0 - 1] [i_0 + 2])))))))) : (max(((-(arr_7 [i_3]))), ((((arr_3 [7] [i_1]) || var_11))))));
                                var_16 = ((!(((var_6 % (~var_4))))));
                                arr_15 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((((min(var_3, (arr_0 [5] [10]))) / ((12 ? 3663312967 : 12))))), (((arr_7 [4]) ? ((3 / (arr_4 [i_0] [i_0] [i_0]))) : (-119 * 123)))));
                                var_17 = (min(var_17, ((((arr_9 [i_0] [i_0] [i_0 + 3] [i_2 + 2]) * (max(4294967295, -18)))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, (arr_13 [i_0] [3])));
                    arr_16 [8] [4] [8] = -1113400801;
                }
            }
        }
    }
    var_19 += (min(var_1, ((-8995493587290813859 ? 81 : -8684500269799806436))));
    var_20 = var_9;
    var_21 = ((((var_5 ? (1 ^ 288230375883276288) : ((var_9 ? 0 : var_0)))) % var_1));
    #pragma endscop
}
