/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 += (~715987464);
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= var_2;
                    var_17 = (arr_2 [i_2 - 1] [i_2]);
                    var_18 -= (arr_4 [18] [18] [18]);
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = var_9;

    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_12 [i_3] = (~1241400004);
            var_21 = (min(var_21, (((((((arr_10 [i_4 + 1]) ? (arr_10 [i_4 + 2]) : var_9))) ? (arr_10 [i_4 + 2]) : -242)))));
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_22 = ((((((arr_13 [i_5] [i_5 - 1]) ? var_14 : (arr_13 [i_5] [i_5 - 1])))) ? (arr_11 [i_3] [i_3] [i_5 - 2]) : (!var_2)));
            var_23 ^= var_2;
        }
        arr_15 [3] [i_3] = (((((~(arr_0 [i_3] [i_3])))) ? (~61038) : (arr_0 [18] [i_3])));
        arr_16 [i_3] = ((((arr_1 [i_3]) ? 1987265518808775698 : (arr_11 [i_3] [i_3] [i_3]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = ((-(arr_4 [i_6] [i_6] [i_6])));
        var_25 = 61038;
        var_26 = (((arr_2 [i_6] [i_6]) ? ((var_6 ? 5062400778326529186 : 169)) : var_7));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (arr_5 [i_7] [i_7] [i_7]);
        arr_25 [i_7] [i_7] = var_3;
        arr_26 [i_7] [i_7] = (arr_21 [i_7]);
    }
    #pragma endscop
}
