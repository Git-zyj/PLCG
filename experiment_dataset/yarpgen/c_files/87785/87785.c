/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-2285297465261351626 <= (((var_12 || (var_12 - 1)))));
    var_18 = var_3;
    var_19 = (var_7 == 214);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_20 = (min(var_20, (((((max(1, (1 / var_16)))) ? var_14 : 302246062)))));
                    var_21 = (arr_3 [i_0 - 1] [i_1]);
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_22 = (max(var_22, var_3));
                    arr_11 [i_0 + 2] [i_1] = (max(((var_0 ^ (((-742078577 >= (arr_8 [i_1])))))), var_4));
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_23 = ((((arr_7 [i_4] [i_4 - 2] [i_4]) ? (arr_7 [i_4] [i_4 + 4] [i_4]) : 1)));
                            var_24 = (~((((arr_14 [i_5] [i_4] [i_4] [i_4] [i_0] [i_1]) > (!var_1)))));

                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_25 = 1;
                                arr_21 [i_4] [i_0] [i_4] [i_4] [10] = ((~(~1)));
                                var_26 = (-2147483647 - 1);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_27 = (arr_20 [i_4 + 4] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4]);
                                var_28 = ((2118487750 ? 4503599627370495 : 5523983143902585851));
                                var_29 = 2285297465261351633;
                                arr_25 [i_4] [i_1] [i_4] [i_4] [i_1] [i_4] [i_1] = var_10;
                            }
                        }
                    }
                }
                var_30 = ((-(arr_19 [i_1] [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_0])));
                var_31 &= ((~(arr_14 [i_1] [i_1] [i_1] [i_0] [6] [i_0])));
            }
        }
    }
    #pragma endscop
}
