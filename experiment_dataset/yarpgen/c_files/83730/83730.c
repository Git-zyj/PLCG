/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(min(var_8, 8659504186111826463)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = ((!(((var_6 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_0]))))));
                    var_15 += (arr_3 [i_1 - 1] [i_1 - 1] [i_2]);
                    var_16 = ((arr_4 [i_1 - 1] [i_2]) ? (arr_4 [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1] [i_2]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = (~var_12);
                    var_18 += (((~var_11) | ((var_3 ? var_3 : var_9))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = 16640515334638565524;
        arr_18 [i_5] = (((arr_12 [i_5]) ? (arr_10 [i_5] [i_5]) : (arr_10 [i_5] [i_5])));
        arr_19 [i_5] = ((var_9 && (((arr_9 [1] [i_5] [i_5]) || var_8))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (6377855219768118815 ? -5152435969369075893 : (min((var_5 | 8400929152328604814), (274876858368 | 1))));
        var_19 = ((-838745792 ? 1152912708513824768 : 235));
        var_20 = (min((((arr_12 [i_6]) ? var_2 : (arr_12 [i_6]))), ((((((arr_1 [i_6] [i_6]) ^ (arr_0 [i_6])))) ? 0 : 1))));
        arr_25 [i_6] = ((var_6 ? (((2877318303 ? -6793 : (arr_10 [i_6] [i_6])))) : (min((arr_21 [i_6]), (!var_8)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_21 = var_4;
        arr_30 [i_7] [i_7] = (min((((arr_20 [i_7]) ? 8400929152328604820 : (arr_20 [i_7]))), (-9223372036854775807 - 1)));
    }
    #pragma endscop
}
