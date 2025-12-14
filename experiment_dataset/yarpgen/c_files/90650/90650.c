/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [5] [i_1] = (((((~(arr_2 [i_0 + 1] [i_0])))) || var_0));
                            var_12 = (max(7146051702696265745, (!21)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    arr_12 [2] [i_1] [18] [i_1] = ((var_6 | (((!(arr_2 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [15] [i_1] [i_1] [i_1] [21] [i_1] [i_5] = ((!(arr_16 [i_5 + 4] [i_5 + 4] [i_0 + 3] [i_5] [i_4 - 2])));
                                var_13 = ((!(arr_1 [i_6])));
                                var_14 = 16137900656953655698;
                            }
                        }
                    }
                }
                for (int i_7 = 4; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, (arr_10 [i_1] [i_7 - 1] [1] [3])));
                    arr_24 [i_0 + 3] [i_1] [i_1] [i_7] = (arr_16 [i_0 + 3] [8] [i_7] [i_7] [i_7]);
                    var_16 ^= (((31 || var_3) && ((max((arr_4 [i_7 - 3] [7] [2]), ((-(arr_4 [i_0] [i_0] [i_7 + 2]))))))));
                    arr_25 [i_0] [i_1] |= ((70 ? (arr_7 [i_0] [i_0 + 2] [9] [i_7 - 3] [8] [i_7 - 4]) : ((max(2308843416755895939, 95)))));
                }
                for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    arr_29 [2] [i_1] = (arr_6 [i_0] [i_8 - 1]);
                    var_17 = (max(var_17, (((165 ? (((max(66, 153)))) : ((~(max(6462994242113571783, (arr_0 [i_0]))))))))));
                    arr_30 [i_8 + 2] [1] [12] [20] = 8;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_18 = (((((var_8 ? var_7 : (arr_3 [i_0 + 2])))) * (((arr_3 [i_0 + 2]) ? var_3 : 153))));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_0 - 1] [i_0 + 1] = (~var_6);
                        var_19 = ((((max((!var_7), ((~(arr_27 [i_10] [i_9] [i_1] [i_0])))))) ? var_4 : 51));
                    }
                    arr_39 [i_0] = ((!((max(((425323508 ? 16137900656953655698 : var_0)), -1)))));
                }
                var_20 = (max(var_20, (((((max(14274585938520358824, 1718073731))) ? 7312620242034149837 : 11528)))));
            }
        }
    }
    #pragma endscop
}
