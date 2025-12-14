/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    var_11 = ((((max((((-64 + 2147483647) >> 0)), (1 && var_3)))) ? 1 : (((var_8 ? var_8 : (!var_2))))));
    var_12 = (max(var_12, ((((-((208 >> (var_1 - 206)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_8 ? (arr_0 [i_0]) : 2828369232214582144))) ? 255 : var_8));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = (((arr_11 [i_1] [i_3] [i_1]) ? (arr_11 [i_1] [i_3] [i_4]) : (arr_11 [i_1] [i_1 + 1] [i_2])));
                                var_13 = (min(var_13, 2283128896191339804));
                            }
                        }
                    }
                    var_14 = 7987900190041972691;
                }
            }
        }
        arr_16 [i_0] = (1 + 11749);
    }
    #pragma endscop
}
