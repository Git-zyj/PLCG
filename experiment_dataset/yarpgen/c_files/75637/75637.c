/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;
    var_12 = var_0;
    var_13 = (min(var_13, var_8));
    var_14 ^= (min(var_1, ((max(16383, (max(var_0, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((((min(1490667026, ((max(-99, var_2)))))) || ((!(arr_4 [i_1] [i_1 + 2] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [14] [i_3] = (arr_7 [i_0] [i_2] [8] [i_4]);
                                var_16 -= (max((((arr_8 [1] [1] [i_1 - 1] [12] [i_4 + 1] [6]) ? (arr_8 [4] [i_0] [i_1 - 1] [4] [i_4 + 1] [i_4 - 2]) : (arr_6 [i_0] [0] [i_1 - 1] [10]))), ((min((arr_6 [i_1] [i_1 + 2] [i_1 - 1] [i_3]), (arr_6 [0] [5] [i_1 - 1] [i_1 - 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_17 *= var_6;
                            var_18 = -1490667033;

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 19;i_7 += 1)
                            {
                                var_19 = (max(var_19, ((((arr_6 [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]) + (var_2 + var_10))))));
                                arr_21 [i_0] [i_5] [i_0] = ((-12981 ? 4294967289 : -9003300007482911143));
                                arr_22 [i_1 + 2] [i_0] = (((arr_9 [i_0] [i_0]) <= -1));
                                var_20 ^= (((((arr_5 [9]) ? var_5 : var_10)) % (var_6 - var_9)));
                            }
                            arr_23 [i_0] [0] [i_1] [i_5] [i_6] [14] = (max(-506241611930725597, (max((((arr_9 [i_0] [i_0]) ? (arr_17 [i_0] [4] [i_5] [16]) : -1490667033)), (arr_14 [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
