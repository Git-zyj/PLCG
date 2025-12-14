/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_2] [i_3] = (var_12 / 895390578);
                            arr_12 [i_1] [i_2] [i_2] [i_1] [i_1] = (((max((((arr_6 [i_1] [i_1] [i_1] [i_1]) ^ var_11)), var_3)) ^ var_15));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((arr_6 [i_0 + 2] [12] [i_0 + 1] [i_1]) + 2147483647)) << (((max((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))) - 9548223222934101651))));
                        }
                    }
                }
                var_18 = (((-1542687149 ? -55 : -895390578)));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 = (max(((8160 ? 738862501 : -895390555)), (2078320635 / 895390575)));
                                var_20 = ((((((var_0 ? var_4 : (arr_15 [1] [i_1] [1] [i_6 + 1])))) ? var_8 : (arr_14 [i_6 + 2]))));
                                arr_20 [i_1] [i_0] [i_1] [i_4 + 2] [i_5] [i_6 + 1] = var_8;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_27 [i_1] [i_1] [i_7] [i_8 + 1] [i_8] = (arr_4 [i_0 - 2]);
                            arr_28 [i_8] [i_1] [i_1] [i_0 + 2] = (arr_8 [i_1] [7] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
