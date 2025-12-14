/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = ((~(min(((1 ? 7 : 1)), (arr_5 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 += (((((~(arr_3 [i_4])))) / (arr_13 [i_0] [i_1] [i_2 + 2] [1] [i_4] [1] [i_4])));
                                var_22 *= 1;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_23 = min(((max((arr_15 [i_0] [i_5 - 2] [i_1]), (arr_15 [i_0] [i_5 - 2] [i_1])))), ((~(arr_1 [i_0] [i_0]))));
                        var_24 = (~1);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_22 [i_0] [i_6] [i_6] [24] = (min(-9223372036854775795, 0));
                    var_25 *= (max(0, var_3));
                    var_26 = (((((1 ? (arr_3 [i_0]) : ((~(arr_2 [i_0] [i_6])))))) ? ((min(var_15, (max(var_18, 28266))))) : ((-((max(1, 1)))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 = (min((var_12 > 14816446368684529987), ((-6004087190224238008 + (var_14 & var_17)))));
        var_28 = arr_12 [i_8] [i_8] [i_8] [i_8] [i_8];
    }
    var_29 = (max(var_29, -1));
    var_30 -= (((var_8 + 2147483647) << (var_9 - 1)));
    #pragma endscop
}
