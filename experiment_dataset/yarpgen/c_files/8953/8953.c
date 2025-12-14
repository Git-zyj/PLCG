/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_10, (max(var_6, ((max(var_15, var_3)))))));
    var_19 = (var_5 - var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = var_11;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_21 = var_9;
                                var_22 -= (((!var_12) && ((min((arr_15 [8]), (arr_15 [4]))))));
                                var_23 = (min(var_23, (arr_6 [2] [i_1] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 7;i_6 += 1)
                    {
                        {
                            var_24 = var_15;
                            arr_20 [i_0] = (min(255, 17));
                            arr_21 [i_0] [i_1] [9] [i_1] = (((!var_15) != (((arr_14 [i_1 + 1] [i_6 + 2] [i_5] [i_5] [i_0]) & -1644553800))));
                            arr_22 [i_0] [i_1] [i_6] = -122;
                        }
                    }
                }
                arr_23 [i_0] [0] = -239;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                var_25 = (min(var_25, (arr_26 [4])));
                arr_30 [17] [i_7] = ((((!(arr_29 [i_7])))) - (127 > 18446744073709551587));
            }
        }
    }
    #pragma endscop
}
