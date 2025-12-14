/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~((var_8 ? (!-32763) : (min(var_9, 487313520))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (max((max((arr_12 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1]), (-2147483647 - 1))), (-2147483647 - 1)));
                                var_12 = ((~(max((arr_8 [i_4] [i_3] [i_1] [i_0]), (2147483647 >= -1810)))));
                            }
                        }
                    }
                }
                var_13 = 2930163280;
                var_14 = ((((max(var_2, var_3))) ? (arr_8 [14] [i_1] [i_0] [i_0]) : var_6));
            }
        }
    }
    var_15 = ((!((max(-2147483647, 57)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_6] [i_5] = (((arr_12 [i_6] [i_6 - 1] [i_6] [i_5] [4] [i_6 + 1]) >= (max(((max(var_7, var_7))), ((12973 | (-9223372036854775807 - 1)))))));
                var_16 = (((0 ? (arr_7 [i_5] [i_5]) : (-32767 - 1))));
                arr_20 [i_5] [i_5] [i_5] = 57;
            }
        }
    }
    var_17 = ((min(((-32765 ? 0 : var_3)), var_3)));
    #pragma endscop
}
