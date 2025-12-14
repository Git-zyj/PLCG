/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [1] [i_1] [i_1] [i_0] = (((min(81, 1))));
                        var_21 = (((arr_8 [i_0] [i_1] [i_2 + 1] [i_0]) ? (((-1671618235 ? -122526658 : 53815))) : (min(var_12, var_14))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                {
                    var_22 = var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_21 [i_7] [i_5] [i_5 - 1] [i_5] [i_0] = (-92 ? ((min((arr_14 [i_5] [i_5 - 1] [i_5 + 1] [i_5]), (max(1384897802, var_5))))) : (((((arr_2 [i_4]) + -125)) + ((((arr_0 [i_4]) - var_14))))));
                                arr_22 [i_0] [i_5] [i_5] = 120;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_27 [i_0] [i_4] [i_4] [4] [i_5] = var_10;
                                arr_28 [i_0] [i_5] [i_5] [i_8] [1] = max((((38806 ? 1 : (arr_24 [i_0] [6] [i_5] [i_8 - 2])))), var_4);
                                arr_29 [i_9] [i_5] [i_5] [i_5] [i_0] = max(-122526646, 2147483630);
                                arr_30 [i_0] [i_5] [i_5] [i_5] [i_9] = (arr_14 [i_5] [i_4] [i_5 - 1] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max((min((arr_25 [i_0] [i_0]), (max(3971166575, -1194785787351422810)))), var_17));
        arr_31 [i_0] = -893085672;
        var_24 = 19;
    }
    #pragma endscop
}
