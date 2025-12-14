/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-9 ? (max((~12088174574222256939), (((var_3 ? var_18 : var_5))))) : (((-var_16 * ((min(var_15, 0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [1] [2] [2] = ((!((((arr_3 [i_1 + 1] [i_1 + 1] [8]) ? (arr_3 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [1]))))));
                    var_21 = (max(var_21, (((var_18 + (((((arr_2 [i_1 - 1] [i_1 - 1]) ? (-9223372036854775807 - 1) : var_7)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, 2));
                                var_23 = (max(var_23, (arr_4 [i_1 + 1] [7] [i_1 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = 2;
                                var_25 = (max(var_25, (arr_14 [i_6] [i_0] [i_0] [i_0] [i_1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
