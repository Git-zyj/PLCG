/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(~var_12)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0]);
        var_17 = ((~((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((var_14 < ((((((arr_2 [i_1]) ? (arr_5 [i_1] [i_1]) : var_9))) ? var_7 : (~3))))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (((arr_0 [i_1]) ? (!var_2) : ((0 * (var_13 < -352106766)))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_5] = ((~(arr_12 [i_1] [3] [3])));
                            arr_19 [i_1] [i_2] [i_1] [7] [7] [i_5] [i_5] = (arr_15 [i_5] [i_4] [i_3] [i_3] [i_2] [i_1]);
                            arr_20 [i_4] [i_2] [i_4] &= (min((max((arr_6 [16]), (min((arr_12 [i_1] [i_2] [i_5]), (arr_13 [i_5] [i_5] [i_5] [i_5]))))), (((min((arr_13 [i_2] [i_3] [i_2] [i_5]), (arr_4 [i_4] [i_4])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_19 = 6;
        var_20 = (((arr_22 [i_6]) < 3163558450));
        arr_23 [14] = ((+(((((arr_22 [i_6]) ? 250 : (arr_21 [i_6])))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = (arr_22 [13]);
        arr_27 [i_7] = ((!(249 < -352106766)));
    }
    var_21 = (((~var_5) ? var_10 : (max(var_6, var_9))));
    var_22 = (min(var_0, var_9));
    var_23 |= var_6;
    #pragma endscop
}
