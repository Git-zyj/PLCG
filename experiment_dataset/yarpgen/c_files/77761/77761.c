/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_13 &= arr_2 [i_0] [i_1] [i_1];
                var_14 = ((5705045565398822703 ? -1422903535 : 255));
                arr_4 [i_1 - 1] = (arr_1 [i_1 + 2] [i_1 - 3]);
            }
        }
    }
    var_15 = (((var_11 + 2147483647) << (var_7 - 1)));
    var_16 = (min(var_16, var_0));
    var_17 = (((min(var_6, (var_3 | var_10))) <= var_6));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_18 = ((var_3 ? (((((var_11 ? var_4 : (arr_5 [i_3])))) ? (var_2 % var_6) : (arr_8 [i_3]))) : var_0));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_4] [i_3] = (((arr_11 [i_2] [i_2 - 1] [i_4 + 1] [i_5]) << (((var_2 != (arr_11 [i_2] [i_2 - 1] [i_4 - 1] [i_2]))))));
                            var_19 = ((!((((arr_16 [i_2 - 1] [i_3] [i_4 + 1] [i_5]) - (var_2 + var_8))))));
                            arr_18 [i_2] [i_2] [i_3] [i_4] [i_5] = var_8;
                            arr_19 [i_2] [i_3] [i_3] [i_4 - 1] [i_4 - 1] [i_5] = var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
