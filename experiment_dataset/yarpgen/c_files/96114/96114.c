/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((arr_0 [i_0]) ? ((max((arr_1 [i_0] [i_0]), ((((arr_0 [i_0]) && (arr_3 [i_0] [i_0]))))))) : (((arr_3 [i_0] [i_0]) ? var_5 : (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] = (((((-24 ? var_10 : (((63011 ? var_5 : var_13)))))) ? ((((((arr_12 [i_0] [i_1 - 1] [i_2]) ^ var_13))) ? -35 : -var_16)) : (arr_6 [i_1 - 1] [i_1 - 1])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((-(min(((39 ? var_0 : 20950)), var_16))));
                        arr_16 [i_1] [i_1] = ((((((var_9 + 2147483647) >> (((arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) + 85))))) ? ((((arr_9 [i_1] [i_1 - 1]) ^ (arr_9 [i_1] [i_1])))) : var_11));
                        var_17 = -var_2;
                        var_18 = var_6;
                    }
                }
            }
        }
        var_19 = (1 ? (max((arr_2 [i_0]), ((((var_6 + 2147483647) >> (-126 + 147)))))) : (((((33373 >> (var_9 + 24))) >> ((((var_12 ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0]))) + 69))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_7] [i_5] [i_6] [i_0] [i_4] = (arr_22 [i_0] [i_5] [i_6] [i_7 + 3]);
                                arr_28 [i_0] [i_7] [i_5] [1] [i_7] = 5312052433173985643;
                            }
                        }
                    }
                    var_20 = ((((((arr_2 [i_5]) ? ((var_9 ? (arr_26 [1] [i_0] [1] [i_5] [i_5]) : 255)) : (arr_23 [i_0] [i_0] [2] [i_0] [1])))) ? (arr_9 [i_0] [i_5]) : var_10));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        arr_32 [i_8] = ((((((((1 ? var_7 : var_16))) ? var_9 : (arr_30 [i_8 - 1] [i_8 - 1])))) ? (arr_29 [i_8]) : ((((((arr_31 [i_8]) || (arr_31 [i_8]))) && ((min(var_11, (arr_29 [i_8])))))))));
        var_21 += (((((var_8 ? (((34 ? -8 : -99))) : (2270830596 & 64179)))) ? (((((-8649492430181665354 ? (arr_30 [i_8] [i_8]) : var_0))) ? (arr_31 [i_8 - 1]) : -0)) : ((((((17845324759954112704 ^ (arr_30 [1] [i_8])))) ? ((min(var_0, (arr_30 [i_8] [0])))) : (arr_30 [1] [i_8 + 3]))))));
        var_22 = (max(var_22, (arr_31 [i_8])));
        var_23 = var_15;
    }
    var_24 = var_7;
    var_25 = ((!(-2147483647 - 1)));
    #pragma endscop
}
