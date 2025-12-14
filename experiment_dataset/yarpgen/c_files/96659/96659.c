/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min((min((!-56), (110 / var_7))), (min(-127, 255)))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_19 -= min(-11, 241);
                    arr_7 [i_0] [16] [i_0] = max((!-66), (var_1 / var_6));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = (var_10 || 255);
                        var_20 &= ((~(~95)));
                        var_21 -= (!var_16);
                        arr_11 [2] [2] [i_0] [i_3] = ((((139 % ((((arr_8 [19] [i_0]) || var_14))))) <= var_14));
                        var_22 = var_0;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_23 |= (((1 < 239) == (62 - 75)));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = (69 * var_10);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_24 = max((arr_2 [i_0] [i_0]), (arr_5 [i_2]));
                            arr_22 [i_0] [i_0] = (max((~-51), ((((arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1]) == 62)))));
                        }
                        arr_23 [3] [i_0] [i_0] [3] = ((-58 && ((((-63 + 2147483647) << (((arr_20 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) - 144)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 = 70;
                                arr_30 [20] [20] [15] [i_0] [i_7] [i_8] [i_7] = ((57 == ((((184 + (arr_15 [i_0] [i_1] [i_2] [i_2] [i_0]))) ^ -11))));
                                var_26 = (min(var_26, (((~((249 ? var_7 : 210)))))));
                                arr_31 [i_0] [i_0] [i_0] [i_0] [22] [i_1] = (((((((((~(arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? 210 : ((max(3, (arr_14 [i_0] [i_1])))))) + 2147483647)) >> (-73 + 89)));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_35 [i_0] [i_1 - 1] = var_7;
                    var_27 = (~1);
                    var_28 = (min((min((var_6 >= 81), -0)), ((var_16 ? 44 : (arr_15 [i_1 + 1] [i_1] [i_9] [10] [1])))));
                    var_29 = (min(var_29, ((((((!(arr_5 [i_1 - 1])))) >> (arr_24 [i_0] [i_1] [i_9] [16] [i_9]))))));
                }
            }
        }
    }
    var_30 ^= (max((~var_12), var_3));
    var_31 = (max(var_31, var_17));
    var_32 = var_7;
    #pragma endscop
}
