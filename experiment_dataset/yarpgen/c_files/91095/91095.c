/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (-18446744073709551603 ? (arr_1 [i_0] [i_0]) : ((151 ? (arr_1 [20] [i_0]) : (arr_0 [i_0]))));
        var_20 = (max(var_20, (arr_0 [i_0])));
    }
    var_21 = 4294967295;
    var_22 = min(var_3, (((var_13 ? var_13 : var_2))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_23 += 17453568746785905742;
                            var_24 = ((!((max(252, (arr_10 [i_1] [i_1] [i_1]))))));
                            var_25 = (((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1]) << (((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1]) - 58))));
                            var_26 = var_4;
                            var_27 |= (-25980 != var_9);
                        }
                    }
                }
                var_28 = (max(var_28, 16991));
            }
        }
    }
    #pragma endscop
}
