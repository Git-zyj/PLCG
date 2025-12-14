/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 -= (max(0, (((arr_2 [i_2 + 1] [i_0] [i_1]) ? var_9 : ((var_1 ? var_3 : var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 *= (((((var_8 ^ (arr_7 [i_0] [i_2] [i_4])))) ? ((((arr_7 [i_0] [i_1] [i_1]) > var_1))) : (arr_7 [i_3] [i_2] [i_0])));
                                var_12 = (!549755813888);
                                arr_12 [i_1] [i_1] = ((((((((var_4 ? var_9 : (arr_2 [i_0] [i_1] [i_3])))) ? (arr_11 [i_3 + 2] [i_3 + 2] [i_2 + 2]) : (1 ^ var_0)))) ? (((arr_6 [i_1] [i_1]) ? (arr_9 [i_0] [i_2 + 2] [i_2 + 1] [i_3] [i_2 + 1]) : var_8)) : (((((((arr_10 [i_0] [i_0] [i_2] [i_0] [i_2]) | var_7))) & var_4)))));
                                var_13 = ((((min(((((arr_7 [i_3] [i_3] [i_2 - 1]) ? 1 : var_2))), ((var_6 ? (arr_10 [i_4] [i_0] [i_0] [i_0] [i_0]) : var_4))))) ? 168 : ((~((var_5 ? 1 : 5648283075084712574))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        var_14 |= (arr_3 [i_0] [i_1] [i_2 + 1]);
                        var_15 += 0;
                        var_16 += (~((1 ? (arr_1 [i_2 + 2]) : (arr_8 [i_1] [i_1] [i_1]))));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = arr_14 [i_2] [i_1] [i_2] [i_6] [i_2];
                        arr_18 [i_6] [i_1] [i_2] [i_6] [i_2] = ((((~(arr_6 [i_6 - 2] [i_1])))) ? (((arr_16 [i_1] [i_1]) ? (max(var_3, 40242)) : (arr_7 [i_0] [i_1] [i_2]))) : 143);
                        arr_19 [i_0] [i_0] [i_0] [i_0] |= (min(((((arr_1 [i_6 + 2]) || 5648283075084712574))), var_5));
                        var_17 = (((((~(arr_15 [i_1] [i_1] [i_2] [i_6] [i_0] [i_6]))))) ? (((arr_0 [i_1] [i_0]) + (arr_16 [i_1] [i_1]))) : -40242);
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = ((max((((arr_2 [i_2] [i_1] [i_0]) ? 88 : 549755813888)), ((((arr_15 [i_7] [i_0] [i_1] [i_1] [i_1] [i_0]) - 1))))));
                        var_18 = (max(var_18, ((((((var_5 ? (((arr_13 [i_0] [6] [i_2] [i_2] [i_2] [i_7 - 1]) + 25293)) : (((1 <= (-2147483647 - 1))))))) ? (((!(max(1, 1))))) : (((arr_15 [i_2 + 1] [i_2 + 2] [i_7 + 1] [i_2 + 1] [i_7 - 1] [i_7 + 1]) ^ (arr_15 [i_2 - 1] [i_2 - 1] [i_7 - 2] [1] [i_7] [i_7 + 2]))))))));
                    }
                    var_19 &= ((((((1 > 244) >> 1))) & 2495690452));
                    var_20 = (max(var_20, (((((max(60719, 1))) * 1)))));
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
