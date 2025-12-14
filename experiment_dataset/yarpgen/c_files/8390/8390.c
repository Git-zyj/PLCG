/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 ^= (arr_1 [5]);

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_3] [i_2] [i_3] = (arr_0 [i_3]);
                        arr_13 [i_3] [i_1] [14] [i_3] = (max(((18712 ? (arr_10 [1] [i_3 + 1] [i_0] [i_3]) : (arr_11 [i_3 - 1]))), (-81 > 18712)));
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_2] = (max((arr_2 [i_0]), (arr_8 [i_0] [i_1])));
                    var_12 = (min(var_12, ((max(1, 8865251516305434582)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_13 = 1403422386;
                                var_14 = (max(var_6, (max((arr_9 [i_2] [i_5 + 4] [7]), (arr_9 [i_2] [i_5 + 3] [i_5])))));
                                var_15 = var_9;
                                var_16 -= (((((var_6 > (arr_10 [i_4] [6] [6] [i_4]))))) == (7734889670421082186 * 88));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_17 += 1073741824;
                    var_18 = var_7;
                    arr_21 [i_6] [i_0] [7] [i_6] = (max(var_6, (arr_10 [i_0] [8] [i_0] [i_6])));
                }
                var_19 = (max((((arr_5 [i_0]) ? -994418807 : (arr_19 [i_0]))), 237));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_20 = (min(-12716, 1));
                            var_21 = (min(var_21, ((((arr_22 [i_7] [i_7 - 2] [i_7 + 1] [i_0]) < 1)))));
                            arr_27 [i_7] = (((~(arr_22 [i_7] [i_8] [i_8] [i_7]))) < (!2545559295779550118));
                            var_22 = (max(var_22, ((max((max((!0), var_2)), (((-(arr_18 [i_7] [6] [i_0])))))))));
                        }
                    }
                }
                arr_28 [i_1] [i_1] [i_1] = (arr_6 [1] [i_1]);
            }
        }
    }
    var_23 = 994418810;
    var_24 = ((1 ? 0 : -1866163868));
    #pragma endscop
}
