/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_3;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (((((var_0 ? (arr_1 [i_0] [i_0]) : -21065))) ? ((((-21039 > ((var_0 ? var_9 : -21065)))))) : (var_6 - -3670503702204253285)));
                arr_4 [i_1] = ((1 == (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (max((21064 & -21060), ((min(21064, 167)))));
                            var_17 = min(((-var_7 / (min(var_11, var_4)))), (arr_8 [i_1] [i_1]));
                        }
                    }
                }
                arr_10 [i_1] = ((!(arr_5 [i_0 - 2] [i_0 - 3])));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((-(arr_0 [i_4])));
        var_18 -= (((arr_3 [i_4]) & ((var_8 ? (arr_6 [i_4] [14]) : var_11))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_19 = var_6;
                    var_20 |= ((((((arr_5 [i_4] [i_4]) / (arr_6 [i_5] [i_6])))) ? (arr_3 [i_5]) : (1 / -21049)));
                    arr_19 [i_5] = -21065;
                    var_21 |= 21049;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_22 = ((((var_1 != (arr_1 [i_7] [i_7])))));
        arr_23 [i_7] = ((+((((129 ? (arr_3 [i_7]) : 40923)) + (arr_9 [i_7] [8])))));
    }
    #pragma endscop
}
