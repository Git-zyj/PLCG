/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 32767;
    var_11 = (var_6 ^ var_3);
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = 30765;
                    var_13 = (max(var_3, (((37038 < (arr_5 [i_2 + 2] [i_2] [i_2]))))));
                }
            }
        }
        arr_8 [5] = ((min((10348 >= var_3), (arr_4 [i_0]))));
        arr_9 [i_0] [i_0] &= (arr_2 [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_3] = var_5;
                    var_14 = (max(var_14, ((max((~var_5), (arr_16 [i_3] [i_3] [i_3] [i_3]))))));
                    var_15 = (max(var_15, 32767));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_16 = (max((!245), (-2147483647 - 1)));
                                var_17 = ((!((min((max(-6171033880176039844, 77)), (~23))))));
                                arr_26 [i_3] [i_6] [i_7] = max((arr_22 [i_3] [i_3] [i_5] [i_3] [i_3]), (arr_18 [i_6]));
                            }
                        }
                    }
                }
            }
        }
        var_18 = 32767;
        var_19 = (arr_19 [i_3] [i_3] [i_3] [i_3]);
    }
    var_20 = 32767;
    #pragma endscop
}
