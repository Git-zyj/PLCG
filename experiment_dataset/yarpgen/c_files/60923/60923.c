/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 ? var_12 : var_5));
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((var_12 * (arr_1 [1])))) ? var_5 : -1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = ((((1 ? -496983206 : (arr_5 [i_0]))) + -var_7));
                            var_20 = (min(var_20, (((1 ? ((-75 ? 1 : 1)) : var_3)))));
                        }
                        var_21 = (((((((1 ? 1 : 1))) ? (1 | 1) : var_5)) != ((0 ? 1 : 1))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = (!var_16);
                        arr_17 [1] &= min(-27373757, var_1);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 *= (1 * var_0);
                                arr_24 [1] [i_1] [1] [i_5] [i_0] [i_1] [i_1] = (arr_21 [i_0] [i_1] [i_2] [i_5]);
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-(min((arr_19 [i_0]), -72381230))))) > (min(1, 2078232513)));
                                arr_26 [i_0] [4] [i_0] [4] [i_0] [i_0] |= ((((27373747 ? var_6 : (arr_14 [18] [i_1] [i_2] [i_1] [18]))) / (1 <= 622770127)));
                                arr_27 [i_0] [i_0] [i_2] [i_5] [i_6] = (((arr_1 [i_0]) * 0));
                            }
                        }
                    }
                }
                arr_28 [i_0] = (((((-((1 ? -1 : 1))))) * ((1 + ((1516208693 ? 4 : 1))))));
            }
        }
    }
    #pragma endscop
}
