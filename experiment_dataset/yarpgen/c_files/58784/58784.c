/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = 395793452;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] = 3899173845;
                        arr_11 [i_0] [i_1] [i_0] [i_3] = -125;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_16 [i_0] [4] [i_0] [i_4] = 0;
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((min(3322760643, ((max(var_2, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_21 = (max(var_21, (((var_4 + (arr_9 [i_0] [10] [10] [i_5]))))));
                        arr_20 [i_1] [i_5] = ((-(arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])));
                        arr_21 [i_0] [i_2] [i_5] = var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_28 [i_2] = (arr_19 [i_0] [i_1] [i_1] [i_1] [i_7]);
                                var_22 = (((((max((arr_22 [i_1 - 2]), (arr_14 [i_1 - 1] [i_7] [i_7] [i_1 - 1] [i_7] [i_7]))))) + (min(1862372734, 3713329130))));
                                arr_29 [i_0] [i_1] = min(7, (((!(((-(arr_3 [i_0] [i_0] [i_0]))))))));
                                var_23 = (min(3899173844, -10667));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_37 [i_0] [i_8] [i_10] [10] [i_8] [i_9] = -21173;
                        arr_38 [i_8] [i_8] = -1;
                    }
                }
            }
        }
        arr_39 [i_0] = (+((((max((arr_31 [i_0]), (arr_31 [i_0])))) ? 2047 : (((var_17 ? var_12 : var_2))))));
    }
    var_24 = max((min(-var_2, -var_13)), var_16);
    var_25 = (max(var_25, 36366));
    #pragma endscop
}
