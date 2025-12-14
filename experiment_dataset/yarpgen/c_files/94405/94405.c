/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 ^= 18098;
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_3] [i_2] = 224;
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_1] = (max((max((arr_7 [i_0] [i_1] [i_3] [i_4]), (arr_6 [i_0] [i_1] [i_1] [i_3]))), ((((arr_0 [i_1 - 1]) <= (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_20 = ((~(((arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ^ (arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1])))));
                    arr_14 [i_0] [i_1] [i_0] = (max((arr_5 [i_0] [i_0] [i_0] [i_0]), ((-6354341895944665257 * (((((arr_10 [i_2] [i_2] [i_2]) || 31))))))));
                    arr_15 [i_2] [i_0] [i_0] = (min((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 + 1]))))), (arr_7 [i_0] [i_0] [i_0] [i_0])));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = 224;
                            var_22 = (((((arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1]) << (((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]) - 998204285)))) << (((max((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) - 998204285))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_1] [i_6] = ((-(max((arr_8 [i_1 + 1] [i_6] [i_5] [i_6]), 4502500115742720))));
                            arr_24 [i_1] [i_1] [i_2] [i_1] [i_5] [i_6] = (!4502500115742720);
                        }
                        arr_25 [i_2] = (min((min(31525197391593472, (arr_21 [i_1 - 1]))), (((max(224, (arr_0 [i_0])))))));
                        var_23 = (min(var_23, (arr_6 [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
                        arr_26 [i_5] [i_5] [i_5] [i_5] |= (!18415218876317958164);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_24 = (((arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_2]) << (31525197391593472 - 31525197391593450)));
                        var_25 += ((!(arr_20 [i_7] [i_7] [10] [10] [i_1 - 1] [i_1 - 1])));
                        var_26 = (max(var_26, (arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_7] [i_7])));
                    }
                }
            }
        }
        arr_29 [i_0] [i_0] = (((((!(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) > 6354341895944665257))))) * (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_27 = (((min(1, var_14)) >> (var_10 - 772501480)));
    #pragma endscop
}
