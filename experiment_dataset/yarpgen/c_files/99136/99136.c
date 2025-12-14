/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (min((arr_5 [i_1] [i_0]), (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))))));
                arr_6 [i_0] [i_1] [i_1] = -14314;
                var_22 = (((((3006673902 ? 2147483647 : (arr_0 [i_0])))) ? (min(257674992, ((1 ? (arr_2 [i_1]) : (arr_4 [8]))))) : (arr_3 [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_23 -= (arr_7 [i_1] [i_1] [i_1]);
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (max((arr_8 [i_0] [0] [i_2]), (max(-1, (min(-963211309, 2147483634))))));
                    var_24 = ((((max((arr_2 [i_2]), (arr_5 [10] [i_1])))) && (((arr_7 [i_0] [i_1] [i_2]) || (!2147483647)))));
                }
                var_25 *= (arr_8 [i_0] [1] [i_0]);
            }
        }
    }

    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3 + 1] = ((-121 ? 2415 : 63));
        var_26 = (arr_1 [i_3] [9]);
        var_27 = (max(var_27, (arr_7 [i_3] [i_3 + 2] [18])));
        var_28 = (min(var_28, ((((arr_7 [i_3 + 1] [i_3] [24]) ? ((((((1 ? (arr_0 [7]) : 222937636))) && (!32767)))) : (((arr_11 [i_3 + 2]) ? (!4294967264) : ((1 ? 1 : (arr_3 [i_3 + 2] [i_3]))))))))));
        var_29 = 2147483647;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((arr_12 [i_4]) || (((-1 % (arr_5 [i_4] [i_4 + 1])))));
        var_30 = -252;
        var_31 = (max(var_31, (arr_11 [i_4 - 1])));
        arr_17 [i_4 - 1] = 1;
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5 + 1] = (((((arr_7 [i_5] [2] [8]) + 2147483647)) >> (((~-22973) - 22948))));
        var_32 = 2110269685;
        arr_21 [i_5] = (min(3059828174, (((1 != (arr_2 [i_5 + 1]))))));
    }
    #pragma endscop
}
