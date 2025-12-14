/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((((-199364991103267870 ? var_2 : var_3)))) ? (((var_4 ? var_7 : (~-1614934574)))) : var_9);
    var_11 = var_1;
    var_12 = ((((((((var_5 ? 30310 : 61229))) ? var_5 : var_9))) ? (~18507) : ((min((var_3 && -28293), var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = 19;
                var_14 = ((((47693 ? (arr_0 [14]) : ((~(arr_1 [i_0]))))) >> ((((-(var_2 >= 44371))) + 12))));
                var_15 = (max(-22720, (((arr_0 [i_0 + 3]) ? var_3 : (arr_3 [i_0] [22] [i_1])))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_16 = (max(var_16, (((-905183644 ^ (((28311 < (arr_4 [4])))))))));
                    var_17 = (((arr_3 [i_0] [i_0] [i_1]) + (arr_0 [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = ((!(arr_6 [i_1] [i_3] [i_4])));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1] [i_4] = (((max((((var_0 ? (arr_10 [i_4] [16] [i_4] [i_4] [i_4] [1] [5]) : (arr_4 [i_1])))), (max(3785347777276314086, var_2)))) >> (((max(3241168033, -1614934579)) - 3241167973))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 = ((((-3246388798973040602 ? var_9 : 21178))));
                                var_19 = -11964;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_2] = (arr_10 [i_0] [11] [i_2] [i_1 + 1] [0] [i_1] [15]);
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_25 [i_1] = var_4;
                    var_20 = (min(var_20, var_8));
                    var_21 = ((min((!22080), ((~(arr_5 [i_0] [i_1] [i_1] [i_7]))))));
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    var_22 = ((~((218 >> (44371 != 4131258297590572069)))));
                    var_23 = (((-3115224514745877295 ? (((var_3 < (arr_21 [i_0] [0] [i_1] [i_8] [i_8])))) : var_4)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((((var_2 > (arr_17 [i_8 + 1] [18] [18] [i_0])))) & 38)))));
                                var_25 += ((((((!7030) <= (arr_1 [i_0 + 1])))) >> (((arr_4 [22]) - 36751))));
                                var_26 = (((((max(-3246388798973040615, (arr_27 [i_0]))) | (-73 | var_9))) | (((1255110368 ? (arr_20 [i_0 + 1] [i_1 + 1] [i_0] [i_9] [i_10] [i_0] [19]) : (~var_2))))));
                                var_27 |= -526412469;
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_1] [i_1] = var_7;
            }
        }
    }
    #pragma endscop
}
