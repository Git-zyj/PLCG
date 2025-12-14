/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((2251799813619712 ? 2251799813619712 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 |= ((((min(2251799813619712, 2251799813619712))) ? 0 : (arr_0 [i_0 + 1])));
                var_15 = 9;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (((max((arr_9 [i_0 + 3] [i_0] [i_0] [i_0 - 1]), (~11726602531313325609))) != ((max((((~(arr_7 [i_1] [i_2])))), -2251799813619712)))));
                                var_17 = (max(var_17, ((min(var_7, var_0)))));
                            }
                        }
                    }
                    var_18 = var_8;
                    var_19 = (arr_9 [i_2] [i_1] [i_1] [i_0]);
                    var_20 = (min(var_20, (((255 ? 0 : 1)))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_6] [i_7] [i_5] = (arr_14 [i_0] [i_1] [i_5] [i_5]);
                                arr_21 [i_0] [i_1] [i_5] [i_5] [i_0] = (((min((arr_11 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6]), 0)) << (((max((arr_11 [i_6] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6]), var_4)) - 79))));
                            }
                        }
                    }
                    var_21 = ((1 / (min((1 % 204), (arr_19 [i_0] [i_0] [i_0] [i_5] [i_5] [i_1] [i_0])))));
                    var_22 = (max(((((arr_14 [i_5] [i_0] [i_0] [i_5]) ? ((min(var_6, (arr_1 [i_0])))) : ((min((arr_16 [i_0] [i_0] [i_0] [i_0]), 0)))))), (((2569227983 & 64201) % (1 < 29866)))));
                    var_23 = (min(var_23, ((max(var_12, (((~(arr_3 [i_0 + 2])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_5] [i_8] [i_9] = ((~((((((arr_12 [i_0] [i_0] [i_5] [i_0]) == (arr_12 [i_1] [i_1] [i_5] [i_1]))) && ((((arr_3 [i_1]) ? 24 : -1))))))));
                                arr_29 [i_0] [i_5] [i_0] [i_0] [i_0] = ((-((((var_8 ? 2251799813619697 : -11))))));
                                var_24 = (~0);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_25 -= (((arr_5 [i_0 - 2]) ? (!17) : 29866));
                    var_26 = ((((0 ? 246 : var_5)) + 1));

                    for (int i_11 = 4; i_11 < 22;i_11 += 1)
                    {
                        var_27 = (max(var_27, (arr_31 [i_0])));
                        var_28 = (min(var_28, (((!(arr_7 [i_0 - 1] [i_11 - 1]))))));
                    }
                }
                var_29 = (min(var_29, ((min((~0), ((1 ? ((18 ? 1763297954 : (arr_14 [i_0] [i_1] [i_1] [i_0]))) : 67)))))));
            }
        }
    }
    var_30 += (((((((max(753660339, 255))) ? ((min(var_6, var_3))) : var_3))) ? (min(var_10, var_12)) : ((-11124 ? var_4 : (min(65534, var_12))))));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    var_31 = (min(var_31, (((((((((11121 ? 183903813 : 0))) ? 24 : (((arr_0 [i_12]) ^ (arr_11 [i_12] [i_13] [i_14] [i_14] [i_13])))))) < ((var_12 ^ ((max((arr_32 [i_13] [i_13] [i_12] [i_12]), 4))))))))));
                    var_32 = var_10;
                    arr_43 [i_12] [i_12] [i_12] [i_12] = (~231);

                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_33 = var_9;
                        arr_46 [i_12] [i_12] [i_15] = (((((0 != (((-(arr_38 [i_12] [i_13]))))))) & (!183903813)));
                    }
                }
            }
        }
    }
    var_34 = var_9;
    #pragma endscop
}
