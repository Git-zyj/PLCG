/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 &= (((((min((arr_2 [i_1]), 23562)))) ? (max((((arr_3 [i_1] [i_1] [i_1]) / (arr_2 [i_1]))), 23562)) : 1));
                var_14 = (max((((((var_5 ? (arr_0 [i_0]) : var_3)) == (arr_2 [i_0])))), (((arr_0 [i_0]) - 23562))));
                var_15 = (max(var_15, (((-(arr_4 [i_0] [i_1]))))));
                arr_5 [i_0] = (((((((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0]))))) != ((~((max(23562, (arr_3 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    var_16 = ((var_8 | (((var_9 ? (var_4 | var_9) : ((20090 ? var_5 : var_3)))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                {
                    var_17 |= (((arr_9 [i_2]) / ((min((arr_0 [i_2]), 23562)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 *= ((((41993 != ((0 ? 67 : (arr_4 [i_2] [i_2]))))) ? (max((var_1 | 63), (arr_3 [i_2] [i_2] [i_6 + 1]))) : ((max((arr_18 [i_2] [i_3] [i_5] [i_5] [i_6 - 1] [i_6 + 1] [1]), 11271)))));
                                var_19 -= ((((arr_14 [i_2] [8] [i_4]) ? (((arr_3 [i_2] [i_2] [i_6 - 1]) * (arr_3 [i_5] [i_5] [i_6]))) : ((max((arr_17 [i_2] [i_3] [i_2] [i_5] [i_6 + 1] [i_2]), 3415))))));
                                var_20 = (((arr_14 [i_2] [i_3] [i_3]) ? (((((1 == (arr_8 [i_6 - 1] [i_5])))))) : -23565));
                            }
                        }
                    }

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        arr_22 [i_2] [i_2] [i_4] [i_4] = 1;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_25 [i_4] = (((17202164687494084226 | (arr_15 [i_4] [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1] [i_4]))));
                            var_21 = (min(var_21, 41959));
                            var_22 *= (max(((((arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [i_7]) ? (arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [i_7]) : (arr_24 [i_7] [i_2] [i_7 + 2] [i_7 + 2] [1])))), (min((arr_1 [i_2] [i_2]), (~var_8)))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_23 = ((((32512 ? 1 : (arr_4 [i_3] [i_7 + 3]))) | (arr_1 [i_7] [i_7 + 3])));
                            var_24 = (max(var_24, ((min(77, (((arr_1 [i_4 + 3] [i_4]) ? 167 : (arr_1 [i_4 - 1] [i_7 - 1]))))))));
                            var_25 = (max(var_25, (((((max(((((arr_23 [10] [i_4] [i_4] [i_4] [i_4 - 3]) ? 0 : (arr_4 [i_4] [6])))), (arr_12 [i_2] [i_3] [i_2] [i_7])))) ? (((((((-22936 - (arr_14 [i_4] [i_4] [i_4])))) || ((!(arr_1 [i_2] [i_9]))))))) : ((((1 || (arr_10 [i_2] [i_2] [i_2]))) ? (arr_11 [i_2] [i_2] [i_9]) : 8184)))))));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_32 [i_2] [i_3] [i_4] [i_4] [i_10] = ((((min((max(4441021973748396242, 14513387786986225697)), var_1))) ? ((min(1, ((!(arr_3 [i_4] [i_3] [i_3])))))) : ((-(arr_4 [i_7] [i_10])))));
                            var_26 = (min(var_26, (((((max(35408, (((arr_13 [i_2] [i_3] [8] [i_7 + 2]) ? -76 : var_1))))) ? 189 : ((max(23589, 77))))))));
                        }
                        arr_33 [i_4] [i_7] = ((215 / (((((arr_21 [i_4]) ? (arr_14 [i_3] [i_3] [i_3]) : 9982913869292119223))))));
                        var_27 = (max(var_27, ((+(min((arr_14 [i_7 + 2] [i_7 - 1] [i_4 - 2]), (arr_15 [i_2] [i_7 + 2] [i_7] [i_7 + 2] [i_7] [i_7] [i_2])))))));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, (((((((max(107, 0))) ? var_9 : 17592181850112)) & 6304799646719409225)))));
    #pragma endscop
}
