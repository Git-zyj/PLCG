/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = ((max(3905337096, (arr_5 [i_1 - 1] [i_1 - 1] [4] [i_1 - 2]))));
                                var_19 = ((max((arr_1 [i_1 + 1]), (arr_13 [i_1 + 1] [i_1 + 1]))));
                            }
                        }
                    }
                }
                var_20 = (((arr_11 [i_0] [i_1 - 1] [i_1] [1] [1]) ? (max((arr_4 [i_1 - 1] [i_1] [i_0]), (arr_6 [4] [i_1 - 1] [i_0]))) : (((max(4294967295, (min(72, 7))))))));
                var_21 = ((!(((-(max(var_16, var_8)))))));
                arr_15 [i_0] [i_0] = (max(((((!(arr_6 [i_1 - 2] [i_1] [i_0]))))), (min(65529, 18446744073709551615))));
            }
        }
    }
    var_22 = (~(10109 == -17999));
    var_23 = ((var_2 ? ((var_8 ? -var_1 : (var_12 * var_8))) : (((min(var_13, (max(1, -17999))))))));
    var_24 = 10109;
    #pragma endscop
}
