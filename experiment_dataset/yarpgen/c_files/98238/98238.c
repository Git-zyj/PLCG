/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1 - 4] [i_1 + 1] [i_0] = (max(var_0, (((!(arr_4 [i_1 - 4]))))));
                    arr_7 [i_0] [i_1] = ((var_11 + (arr_1 [i_0 - 2])));
                }
            }
        }
    }
    var_17 = (max(var_17, ((max(var_7, ((((max(var_5, var_15))) ? ((1 ? var_4 : 173)) : ((var_11 ? var_13 : 31)))))))));
    var_18 = ((var_1 ? ((((!var_2) ? ((82 ? 179 : 24984)) : (2985200857 || var_12)))) : (min(var_1, ((max(101, var_1)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((4 ? var_11 : var_11)))));
                                var_20 = ((((arr_8 [i_3] [i_7 - 1]) ^ (arr_11 [i_7 + 1] [i_7 + 1] [i_7 - 1]))));
                                var_21 = (max(var_21, (((((var_0 ? (arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 1]) : (arr_2 [i_7 + 1]))) == (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                            }
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    arr_24 [i_3] [i_3] [i_3] [i_3] = var_11;
                    var_22 = (min(var_22, ((((arr_16 [i_3] [i_4] [i_3] [i_3] [i_8 - 2]) == (((min(196, var_10)))))))));
                    arr_25 [i_3] [i_4] [i_8] [i_4] = (((((262983872 ? 9 : 186))) + (((arr_21 [i_4] [i_8]) ? (min((arr_8 [i_3] [i_3]), 755527379)) : (~var_8)))));
                    var_23 *= (max((arr_21 [i_8 - 2] [i_8]), ((((((~(arr_8 [i_8 - 1] [i_4])))) ? var_3 : 14346)))));
                }
                var_24 = (((((max((arr_12 [i_3]), -31))) ? (arr_20 [i_3] [i_3] [i_3] [i_3]) : (arr_15 [i_4] [i_3]))));
            }
        }
    }
    #pragma endscop
}
