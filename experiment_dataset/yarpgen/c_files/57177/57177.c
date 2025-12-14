/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((!var_6) < ((max((var_1 > var_0), -1))));
                                arr_14 [i_1] [i_2] [i_3] [i_3] = ((!(arr_2 [i_0] [i_0])));
                                arr_15 [i_0] [i_0] [i_3] [i_4] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_16 = var_8;
                                var_17 = ((55525 ? ((((arr_16 [i_0] [i_1] [i_2] [i_5] [i_0] [i_6]) < 40628))) : ((-303364961 ? (!var_0) : (arr_16 [i_6] [i_5] [i_2] [18] [i_1] [i_0])))));
                                arr_22 [i_0] [i_1] [6] [3] [18] = 55525;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] = (max(32, 2));
                    var_18 = 534773760;
                    var_19 = (min(var_19, var_12));
                }
                var_20 = var_7;
            }
        }
    }
    #pragma endscop
}
