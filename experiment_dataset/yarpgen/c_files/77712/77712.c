/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (10 % 32758);
    var_12 = (1 || var_4);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((!(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = min(var_7, ((-2 ? var_8 : var_0)));
                        arr_13 [i_0] [i_0] [i_0] [i_2] [1] = ((((((1 == var_2) ? var_9 : (~var_7)))) ? (arr_5 [i_1] [i_1]) : (max((~0), ((var_5 ? var_9 : var_7))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2] = 0;
                    }
                    var_15 = (min(var_15, 3));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 = (max(var_3, 0));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                {
                    var_17 = ((arr_24 [0] [i_5] [i_5] [i_6 - 2]) ? (-9223372036854775807 - 1) : ((var_8 - (4294967279 + 134217728))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_18 = var_6;
                                arr_33 [i_4] [i_4] [i_6] [i_7] [i_7] = (((((arr_15 [i_7 + 2]) == (arr_15 [i_7 - 3]))) ? (~0) : (~-3)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
