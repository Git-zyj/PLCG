/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_3 + 3] [i_0] = (((arr_8 [i_0] [i_0] [i_2] [i_3 - 2]) ? var_5 : (arr_1 [i_2] [i_0])));
                            var_10 = ((!(((((-(arr_7 [i_2] [i_2] [i_2]))) << (((max(var_4, -6686523910591085586)) - 95)))))));
                            var_11 = (~6686523910591085586);
                        }
                    }
                }
                arr_11 [i_0] = var_2;
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_12 = (min(var_12, ((((((!var_1) || (arr_13 [i_4]))) ? ((4294967295 + (arr_13 [i_4]))) : (((((~-6686523910591085609) != ((max((arr_12 [i_4]), var_7))))))))))));
        var_13 = (((((var_9 ? (arr_13 [i_4]) : var_9))) ? (min((arr_12 [i_4]), (arr_12 [i_4]))) : (((((arr_12 [i_4]) != (arr_12 [i_4])))))));
        var_14 = (((arr_12 [0]) && (arr_13 [i_4])));
    }
    #pragma endscop
}
