/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((var_11 ? 43 : var_12))));
    var_18 = -32751;
    var_19 = (+-247);
    var_20 = -331606617;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((-331606617 + 2147483647) >> (-var_2 - 19));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] |= (max((max(-331606620, (arr_8 [i_2 - 1] [i_2 + 1]))), (((arr_8 [i_2 + 3] [i_2 - 1]) ? -19391 : (arr_5 [i_2] [i_2] [i_2 - 1])))));
                                arr_14 [i_4] [i_3] [i_0] [12] [i_1] [i_0] = (arr_11 [i_0] [i_1] [i_1] [7] [i_4]);
                            }
                        }
                    }
                    arr_15 [i_2] = ((-0 ? ((((arr_11 [i_0] [i_1] [0] [i_1] [i_1]) ? 1577438919 : (arr_11 [i_1] [10] [i_2 + 1] [2] [i_2])))) : ((max(((1 != (arr_12 [20] [i_0] [i_2] [20] [i_1] [i_2] [i_1]))), (!var_9))))));
                    var_22 = (max(var_22, ((((arr_12 [i_0] [i_1] [7] [i_2 + 3] [i_2] [i_2] [i_2]) ? 331606617 : ((6857267256683962809 ? 56 : (arr_6 [i_1] [i_1] [i_2]))))))));
                    var_23 = (~(!-820487390156913359));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_24 = (((arr_9 [12] [12] [i_5 - 2] [i_5]) ^ (arr_9 [i_0] [i_1] [i_5] [8])));
                    arr_19 [i_5 + 1] = (((var_0 / (arr_17 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_25 = ((((((8272206555431875718 == var_0) ? -32751 : (((-32751 + 2147483647) << (var_1 - 8235)))))) ? ((((((211 ? 331606614 : (arr_9 [i_0] [i_1] [i_0] [i_6])))) ? (arr_20 [i_0] [i_1] [i_6]) : (((arr_1 [i_6 + 1]) >> (-26729 + 26731)))))) : (max(((((arr_2 [i_0]) ? 3755 : 39010))), (arr_16 [i_0] [i_1] [i_6 + 1] [i_6 + 1])))));
                    var_26 = (max((arr_6 [i_0] [i_6 + 1] [i_6 - 1]), var_13));
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_27 = (~-4284);
                    var_28 = (max((((arr_0 [i_0] [i_7]) ? var_0 : (arr_0 [i_7] [i_1]))), (-2147483647 - 1)));
                    arr_25 [i_7] [i_0] [i_0] = ((~((1 + (arr_24 [i_0] [10] [i_7] [14])))));
                    arr_26 [i_7] [6] [i_0] [i_0] = 157;
                }
                arr_27 [15] [i_1] [i_1] = ((var_8 <= (189 + var_5)));
            }
        }
    }
    #pragma endscop
}
