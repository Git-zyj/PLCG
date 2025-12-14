/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 += -0;
                    arr_9 [i_2] = (((max(615293566, 32767))) >> (617849668400881250 - 617849668400881246));
                    var_11 = (((((((var_6 >> (18446744073709551615 - 18446744073709551588)))))) | ((0 & ((-15 ? -250291799 : 7870393625357531676))))));
                    arr_10 [9] [i_2] [19] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [14] [i_1] [i_2] [i_2] [i_2] [i_2] [i_0] |= ((-(arr_1 [i_2] [i_1 - 1])));
                                arr_16 [1] [1] [1] [1] [i_0] |= (max((arr_4 [i_0] [18] [i_2]), ((0 >> (3204010470 < -32767)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_12 += -var_9;

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_23 [i_5] [i_5] [i_6] = ((-var_8 || (arr_21 [i_6] [i_5] [i_5])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_13 = ((617849668400881250 ? ((max(var_2, (arr_19 [i_8 + 1])))) : (var_3 & var_5)));
                            var_14 = var_5;
                        }
                    }
                }
            }
            var_15 = (min(var_15, 0));
            arr_32 [i_5] [i_5] = (((arr_13 [i_6] [2] [i_5] [i_5] [i_5] [i_5]) || (-790708434386532546 ^ -var_8)));
        }
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        arr_36 [i_10] = (((var_9 + 2147483647) >> (((arr_20 [i_10] [i_10]) - 222))));
        arr_37 [15] [i_10] &= 1099511627775;
        arr_38 [4] = ((((((arr_28 [i_10]) + 2147483647)) >> (var_1 / var_1))));
        var_16 = (max(var_16, -250291799));
    }
    #pragma endscop
}
