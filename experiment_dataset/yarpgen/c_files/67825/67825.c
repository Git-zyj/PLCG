/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((9 / (arr_4 [10] [i_1 + 3] [i_0] [i_1 + 4]))) / ((((arr_3 [i_0] [7] [i_0]) >= -6282))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 *= ((((((var_4 & var_6) / (arr_6 [i_2 - 2] [i_2 - 1] [i_2])))) ? ((((57010 >> (var_5 - 27943))))) : (min(((var_1 * (arr_3 [i_0] [i_0] [i_4]))), 1))));
                                var_16 *= var_5;
                                var_17 = ((var_2 >> (146 - 139)));
                                var_18 = (min((((arr_9 [i_1 + 1] [i_2 - 2] [i_3]) * (arr_9 [i_1 + 1] [i_2 - 2] [i_3]))), ((0 & ((((arr_6 [i_3] [i_3] [i_1]) + -1592840948596223852)))))));
                                var_19 |= arr_3 [i_4] [i_2] [i_1 - 3];
                            }
                        }
                    }
                    var_20 = (arr_2 [i_0] [i_1] [i_2 - 1]);
                    var_21 -= 0;
                }
            }
        }
    }
    var_22 = (~var_7);
    #pragma endscop
}
