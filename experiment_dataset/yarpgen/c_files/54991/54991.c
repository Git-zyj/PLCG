/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 -= (min((arr_7 [i_0] [6] [6] [i_3] [6]), ((-((var_3 + (arr_4 [1] [i_3])))))));
                            var_20 -= var_7;
                        }
                    }
                }
                var_21 = (min(var_21, (((0 - (((((0 ? 0 : 855760548))) ? 1 : 3897836226)))))));
                arr_11 [i_0] = (arr_10 [i_0] [i_0] [i_0] [1] [i_1] [i_1]);

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_22 = (((min((((arr_10 [i_0] [i_1] [i_4] [i_0] [i_4] [4]) / var_14)), -1)) / 1));
                    var_23 -= ((var_12 ? (min((max(var_2, var_5)), (((var_12 ? (arr_13 [i_0] [i_1] [1] [i_1]) : (arr_5 [i_0])))))) : ((((((1 ? 1 : 1)) < 1))))));
                    var_24 = (min(var_24, ((((max(-var_18, var_1)) - (!var_13))))));
                }
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    var_25 -= (min(((-(!var_18))), (((!(var_17 | var_5))))));
                    var_26 -= ((((1 != (arr_3 [1] [1] [i_5 - 3]))) ? (max((arr_12 [i_5 - 1] [i_5 + 1] [i_5]), 1)) : (min((max(var_0, 7957140234681796129)), (min(1, 10489603839027755486))))));
                    arr_18 [i_0] [i_0] = 12208416956594551658;
                    var_27 -= (max(1048574, 1));
                }
            }
        }
    }
    var_28 -= 1;
    #pragma endscop
}
