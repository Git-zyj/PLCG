/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((((~(min(var_3, var_1))))) ? ((max(2063496670, (max(-1336682072, 0))))) : (min(((min(var_3, -9))), -var_11))));
    var_15 = ((-(min((min(1336682069, var_1)), -var_1))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_16 = (~var_0);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = ((~((0 ? (arr_4 [i_0] [1] [4]) : var_3))));
            arr_5 [13] [i_0] [i_0] = ((!(((-20 ? -1336682082 : var_1)))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = ((+(((arr_0 [6]) ? var_4 : 28))));
                        arr_11 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((-(((arr_4 [i_0 + 1] [i_1] [i_0 + 1]) ? var_11 : (arr_7 [i_0 - 3] [i_1] [i_2] [9])))));
                    }
                }
            }
            arr_12 [4] [i_0] [i_1] = (((((~(arr_2 [i_1] [i_1] [i_1])))) ? -694533821318847793 : -var_3));
        }
        var_19 &= (((-(arr_1 [i_0 - 1] [7]))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = var_2;
            arr_16 [i_0 - 3] [i_4] = (((~-3) ? (~var_12) : ((0 ? var_1 : (arr_7 [i_4] [i_4] [9] [i_0])))));
            var_20 = ((-4027859181 ? ((var_2 ? 4242539709 : -38)) : (arr_14 [4] [i_4] [i_4])));
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            var_21 |= (~32);
            arr_19 [0] [i_5] [i_5] = ((((!(arr_17 [i_5 + 2] [1] [i_5]))) ? 1 : var_2));
            arr_20 [5] [13] [i_0] = ((~(arr_3 [i_5 - 1] [7] [i_0])));
        }
        arr_21 [i_0] [i_0] = ((-(!var_0)));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_22 = (((((-((min(-1, var_5)))))) ? (min((~var_12), ((min(var_13, var_4))))) : (max(((-(arr_22 [i_7] [i_6]))), (min(2063496696, -714))))));
            arr_27 [5] = ((+(min((min((arr_25 [i_6]), var_11)), 0))));
        }
        var_23 = (min((min((((var_6 ? (arr_22 [i_6 - 1] [i_6 - 1]) : (arr_24 [i_6])))), (min(694533821318847793, 20173)))), ((~((var_1 ? 1336682098 : var_11))))));
        arr_28 [17] [6] = (min(((max(((var_3 ? var_2 : (arr_23 [13] [i_6]))), var_6))), (((((var_8 ? (arr_24 [i_6 + 1]) : (arr_26 [i_6] [i_6])))) ? (((-25 ? (arr_22 [1] [i_6 + 1]) : var_2))) : (min(var_11, var_5))))));
    }
    #pragma endscop
}
