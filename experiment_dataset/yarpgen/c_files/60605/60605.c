/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((arr_1 [i_0] [i_0]) * (((!((max(-6966103007775344185, 1)))))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (~var_3);
                                arr_13 [i_0] = (var_13 % -6);
                                arr_14 [i_4] [i_3] [i_0] [10] [i_0] = var_13;
                                var_17 *= (arr_11 [1] [i_1] [i_1] [16] [i_1] [i_1] [i_2]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0];
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_18 = ((((var_4 / -31) ? (var_1 - -6966103007775344185) : (((~(arr_1 [i_5] [i_1])))))) / (arr_9 [i_5] [i_0] [i_0] [i_0]));
                    var_19 = (58671 ? (arr_1 [i_5] [9]) : ((~(arr_10 [i_0] [i_0] [1] [i_0] [i_0] [i_0]))));
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_20 = (min(var_20, (~var_6)));
                    arr_21 [i_0] [i_0] [i_6] = (((~var_1) > -36));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_5, (arr_8 [i_0] [i_1] [i_7])));
                            arr_28 [i_0] [i_7] [i_8 - 1] = (arr_7 [i_8] [i_8 - 1] [i_8 - 1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_22 += var_6;
    #pragma endscop
}
