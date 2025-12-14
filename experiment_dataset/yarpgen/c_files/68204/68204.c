/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 *= 12991451805885863706;
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3] = ((max(4611685949707911168, 1500188832)));
                                var_17 = (((!(arr_12 [i_3 + 4] [i_4 - 1] [i_0 - 3] [i_0 - 2] [i_4] [i_2]))) ? var_2 : (((arr_1 [i_3 + 2] [i_4 + 3]) - (arr_4 [i_3 + 4] [i_4 + 1] [i_0 + 1]))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [20] [i_0 + 2] = ((4157924636739830052 ? var_5 : (arr_0 [i_1])));
                var_18 *= (~4157924636739830052);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_19 = (min(var_19, -27234));
                            arr_25 [i_0] [i_0] [i_5] = (((arr_11 [2] [i_1] [2] [i_6] [i_6]) / (((max((arr_20 [i_0 - 3]), (arr_23 [i_5])))))));
                            arr_26 [10] [i_1] [i_5] [i_1] = (max((max(4157924636739830052, (arr_17 [i_0 - 3] [i_0 - 1] [i_0 - 2] [i_5]))), 20873));
                        }
                    }
                }
            }
        }
    }
    var_20 = 0;
    #pragma endscop
}
