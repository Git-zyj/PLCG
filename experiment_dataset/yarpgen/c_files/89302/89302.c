/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = ((~(max(536870911, ((min(3112212988, 12)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_0 [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] = max((max(((var_0 ? var_11 : (arr_1 [1] [1]))), -13)), (((!(((0 ? 108 : (arr_11 [i_0] [16] [i_1]))))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (!(((4579311747204866178 ? -8379727842983272935 : (arr_11 [i_0] [12] [i_0 + 1])))));
                            var_18 = min((max((min((arr_5 [i_0] [i_0] [i_0]), -19256)), (arr_7 [i_0] [i_0 - 3] [12]))), var_9);
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0 + 1] [i_3] [i_0] |= var_5;
                            var_19 = (((~(arr_19 [i_1] [i_3] [i_5]))) - ((~(arr_0 [i_1] [i_2]))));
                            var_20 = (min(var_20, (((~(((arr_3 [i_2]) ? (arr_3 [i_3]) : (arr_3 [i_2]))))))));
                            var_21 = (min(var_21, 1073741824));
                            var_22 = ((((((~((min(89, 128))))) + 2147483647)) << (((!(31771 && -1))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (max(var_23, var_3));
                        arr_26 [i_0 - 2] [i_1] [i_0] [i_2] [i_1] [i_6] = (((arr_19 [i_1] [i_0] [i_6]) ? ((var_12 / (arr_19 [i_6] [i_0] [i_2]))) : 8082417916013079670));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_24 = ((((~(~var_8))) ^ ((min((arr_13 [18] [i_7] [1] [i_2] [i_1] [12] [12]), (!-1537681339))))));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_25 = (max((max((-32767 - 1), (max(8849030207754338892, 6107001480912008705)))), ((min((~var_5), (arr_27 [i_0 - 2] [i_1] [8] [i_2] [22] [i_0]))))));
                            var_26 ^= (min(3884560642865421238, -6225525145146291437));
                            var_27 = (((max((((~(-127 - 1)))), 5)) <= (arr_14 [i_0] [i_1] [i_2] [i_7])));
                            var_28 = min((((!(((arr_10 [i_8] [i_7] [i_2] [i_1]) || (arr_3 [i_0])))))), (((min((arr_24 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_0]))) / (var_0 + var_2))));
                            arr_33 [22] [i_0] [i_1] = (min((((var_3 / (arr_32 [i_0 - 2] [i_0 + 1])))), (min(2914206468041936974, 3452044506))));
                        }
                        arr_34 [i_0] [i_1] [i_7] [i_7] [i_2] = ((-(((arr_31 [6] [i_0]) ? (arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [13] [2] [i_0 + 1]) : -28776))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
