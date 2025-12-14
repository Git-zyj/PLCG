/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -8191;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((var_11 ^ ((((arr_3 [i_0] [5]) == (arr_5 [i_2] [i_0])))))));
                    arr_8 [17] = ((4609 && (((61158 ? -6 : -13592)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_15 = (((((-(max(var_7, -118))))) ? ((max((arr_20 [i_6] [i_4] [i_5 - 2]), ((var_10 ? (arr_15 [i_3] [i_3] [i_6] [17]) : var_3))))) : 16773120));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] = var_13;
                                var_16 = (((arr_14 [i_3] [7]) | var_13));
                                var_17 = ((~(max((235 < var_11), ((var_7 ? (arr_19 [i_3] [i_4] [i_5 - 2] [i_7]) : (arr_21 [i_6] [i_6] [1] [i_6 - 2] [i_6])))))));
                                arr_23 [i_3] [i_6 - 2] [i_5] [i_6] [i_5] [i_7] [15] = max((((arr_15 [i_3] [i_4] [i_3] [i_6 - 2]) ? (arr_15 [i_7] [i_3] [i_4] [i_3]) : (arr_15 [11] [i_5 + 1] [i_4] [i_3]))), -var_3);
                            }
                        }
                    }
                    var_18 = max(((255 + (arr_12 [i_5 - 2] [8] [8]))), ((-28725 * (arr_12 [i_5 - 1] [i_5 - 1] [i_5]))));
                }
            }
        }
        var_19 = (min(var_19, ((max(1384455379, -80)))));
        arr_24 [i_3] [i_3] = (max(((((-99 == var_4) == (arr_13 [i_3] [i_3] [i_3])))), var_8));
        arr_25 [i_3] = max((32768 + 18), var_11);
        var_20 = ((-(((((((arr_21 [i_3] [9] [i_3] [i_3] [i_3]) == (arr_13 [3] [10] [i_3])))) >= (((arr_13 [i_3] [i_3] [10]) ? (arr_20 [i_3] [i_3] [i_3]) : var_12)))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_28 [3] = ((((max(3902333644309260723, 236))) ? (((var_8 ^ (-7790 == 13463)))) : ((max(50, 214870056)))));
        var_21 ^= (((16244186115242251277 >= (arr_11 [3] [i_8]))) ? var_10 : 18264599271073107931);
    }
    #pragma endscop
}
