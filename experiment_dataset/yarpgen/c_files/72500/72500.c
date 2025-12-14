/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 1;
                    var_20 = -1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_21 = ((((496747396 ? (arr_6 [i_5] [i_5 + 1] [i_3 + 1] [i_3]) : var_6)) + ((max((arr_14 [i_3 + 1]), (min(4294967295, -1)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 *= (max(97, (arr_10 [i_3 + 1])));
                                var_23 = 1;
                            }
                        }
                    }
                    var_24 = (min(((max(1, var_7))), ((~(((arr_19 [i_3] [i_5]) ? (arr_19 [i_3] [i_4]) : -2071617232))))));
                }
            }
        }
    }
    var_25 &= (!-112);
    #pragma endscop
}
