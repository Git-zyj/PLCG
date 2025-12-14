/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_0 [2] [2])));
                arr_6 [i_0] [10] |= ((((arr_2 [2] [i_1]) ? 4294967278 : (arr_2 [6] [6]))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((~(arr_0 [i_1] [i_2])));
                    var_21 -= (min(175, 12756301659520536060));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_22 -= ((229 ? (arr_14 [i_0] [i_3 - 1] [i_3] [i_1] [i_3] [i_0]) : (arr_14 [i_0] [i_3 - 1] [i_0] [2] [i_3 - 1] [i_1])));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((!(arr_5 [i_5]))))));
                            var_24 = (var_2 ? -117 : (arr_1 [i_3 - 1]));
                            var_25 = (max(var_25, (((183 << (238 - 225))))));
                            arr_17 [i_0] = ((-(var_12 != 115)));
                            arr_18 [10] [i_0] [10] [i_4] [10] = -17725702620074743467;
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_3] [i_1] [i_0] = ((-70 ? (arr_13 [i_6] [i_3 - 1] [i_1] [i_0] [i_0]) : (arr_2 [i_0] [i_3 - 2])));
                        var_26 = (arr_22 [i_0] [0] [7] [1] [i_0]);
                    }
                    var_27 -= 16;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_28 = -66;
                                arr_30 [i_3] [i_0] [i_3] [i_0] [8] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_3 - 1])));
                                var_29 += -1635942992692244399;
                                arr_31 [7] [i_0] [8] [i_7] = (arr_11 [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_30 = (max(var_30, (min(220, 721041453634808148))));
                var_31 += ((!(var_1 + 2711414173)));
            }
        }
    }
    var_32 += 261120;
    var_33 = (min(var_33, ((((!var_6) ? var_3 : var_8)))));
    #pragma endscop
}
