/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((((63461 ? 61131 : 0))), 5)) == ((~(min(0, 255))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 ^= -61122;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((max((((!(arr_4 [i_1] [i_1])))), (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_4 + 2])))) - ((+((61122 << (((arr_9 [i_0]) - 92))))))));
                                var_16 = (((arr_5 [i_1]) ? ((-(arr_5 [i_1]))) : (max((arr_5 [i_1]), 100))));
                                var_17 = (min(var_17, ((((((((arr_3 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [4]) : 2396849722)))) ^ ((63463 ? 43322 : 5)))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_15 [i_0] [i_5] &= (arr_14 [i_0] [i_0] [i_2 - 1] [i_0]);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] = 1;
                            arr_19 [i_1] = ((arr_11 [i_1] [i_2 + 1] [i_2 - 1] [i_2]) ? (arr_17 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2]) : (arr_0 [i_2 + 1]));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_2 - 1] [i_1] [i_1] = (6 && 0);
                            var_18 *= (max((((arr_16 [i_7] [i_1] [i_2 + 1] [i_5]) ? (arr_0 [i_2]) : 3650480877)), ((min(221, 61145)))));
                        }
                        arr_25 [i_1] = min(((((~(arr_14 [i_0] [i_1] [i_2] [i_2]))))), ((4404 ? ((((arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]) ? (arr_11 [i_1] [i_1] [i_2] [i_2]) : (arr_1 [i_0])))) : ((1898117599 ? 864691128455135232 : (arr_4 [i_1] [i_5]))))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_19 = (~1898117593);
                        var_20 = (min(var_20, ((((~(arr_2 [i_2 - 2] [i_8])))))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_2 - 2] [i_9] = (min(((((arr_5 [i_1]) - 1))), ((-117 ? (arr_5 [i_1]) : -1350061175592079629))));
                        arr_33 [i_9] [i_1] = (min((((arr_5 [i_1]) ? (~2396849725) : (((~(arr_1 [i_0])))))), 32767));
                    }
                }
            }
        }
    }
    #pragma endscop
}
