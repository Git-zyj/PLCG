/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (min(65530, ((((((min(5, 0)))) < var_9)))));
                                arr_14 [i_2 + 2] [i_0] [i_4] = ((!(((min((arr_12 [i_0] [i_0] [i_4] [i_3]), 18446744073709551615)) > 255))));
                            }
                        }
                    }
                }
                var_19 = ((~(arr_12 [i_0] [i_0 - 1] [i_0] [i_1])));
                arr_15 [i_0] = 4473334896485841581;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] = (!var_2);
                            var_20 = max((~0), (arr_22 [i_5] [i_6] [i_5] [i_5] [i_8] [i_6 + 3]));
                        }
                    }
                }
                arr_25 [i_5] [i_5] = (arr_23 [i_5] [i_6 + 3]);
                var_21 = ((((max(var_10, (arr_16 [i_6 + 1])))) ? ((max((arr_16 [i_6 - 1]), (arr_16 [i_6 + 3])))) : (arr_16 [i_6 + 3])));
                var_22 = 4294967295;
            }
        }
    }
    #pragma endscop
}
