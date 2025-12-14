/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (+(((9892 + 576460752303423486) ? var_3 : -0)));
    var_12 = (((((var_0 == var_5) / var_4)) / 26683));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (~17870283321406128112);
                arr_5 [i_0] [i_1] [i_0] = (arr_0 [i_0]);
                var_14 = ((((!(var_0 > 2147483643))) ? (((((9899 ? var_4 : var_1)) & ((var_8 ? 9899 : 8191))))) : (((var_5 % 2147483647) ? (max(576460752303423503, var_1)) : -9899))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (((((((var_3 ? (arr_13 [i_3] [i_0] [i_3] [8] [i_0] [11]) : (arr_8 [i_0])))) ? (!var_10) : (-2147483629 | 576460752303423486))) > (((((!(-127 - 1))) ? var_5 : (arr_13 [6] [i_1] [6] [6] [i_0] [9]))))));
                            var_16 = ((((max((2147483625 - 8), (arr_12 [i_0] [i_1] [19] [19] [i_3])))) || (((-(arr_10 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                            var_17 = (max(var_17, ((((!9899) ? (!2373816) : (((-(arr_8 [i_1])))))))));
                            var_18 += (arr_7 [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
