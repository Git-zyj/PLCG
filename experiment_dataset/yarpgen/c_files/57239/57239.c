/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((1801626632 >= (arr_0 [i_0] [14])));
        arr_3 [i_0] = -1435826324;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_13 = (arr_0 [i_1] [i_1]);
        var_14 ^= ((var_0 == ((~(arr_4 [i_1])))));
        arr_6 [i_1] = ((-(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_15 [3] [i_3] [5] [3] = var_9;
                    var_15 = arr_14 [i_3];
                    var_16 = ((((((arr_12 [i_2] [i_2]) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_3])))) ? (((arr_12 [i_2] [i_2]) ? (arr_12 [i_2] [i_2]) : -1537508980)) : (~-1537508989)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = max(61698, -1537508985);
                                var_18 = var_7;
                                var_19 = ((!(((arr_13 [i_6 - 1]) >= (arr_13 [i_6 + 1])))));
                                var_20 = (arr_7 [3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    {
                        var_21 -= 94;
                        var_22 += (min((min(1435826339, 94)), (max(var_1, (arr_18 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_8 + 1] [13])))));
                    }
                }
            }
        }
        arr_30 [19] = 168;
    }
    var_23 = (var_9 ? var_7 : var_0);
    #pragma endscop
}
