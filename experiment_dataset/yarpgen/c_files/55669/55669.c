/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
                    {
                        var_21 ^= (((-2047 ? (arr_10 [1] [i_1] [1] [1]) : var_7)));
                        var_22 = (max((((max((arr_8 [i_0] [i_2] [i_1] [i_0]), var_2)) >> (10991453788576824788 - 15827))), ((var_17 ? -66 : var_2))));
                        var_23 = ((1366146534 ? var_16 : (arr_1 [i_2])));
                        var_24 = 60;
                    }
                    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        var_25 &= (!111);
                        var_26 ^= (((71 == -var_1) ? 0 : (arr_2 [6])));
                        var_27 = ((!((((arr_1 [i_2]) ? var_16 : ((-(arr_9 [i_0] [i_1] [i_1] [i_4 + 1]))))))));
                        var_28 &= ((((min(1, var_9))) ? ((~(~var_6))) : ((min((arr_5 [i_4] [i_4 + 2] [i_4] [i_4 + 1]), (max(1366146532, (arr_8 [i_0] [i_1] [i_2] [i_0]))))))));
                    }
                    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
                    {
                        var_29 += (arr_9 [i_5 + 1] [9] [i_1] [i_0]);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(((arr_11 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5 + 3]) / ((0 ? var_0 : 122))))));
                        var_30 = (13671697120564132126 < var_9);
                    }
                    for (int i_6 = 1; i_6 < 7;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            var_31 = (min(var_31, (((min((arr_13 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]), (arr_16 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1])))))));
                            var_32 = var_15;
                        }
                        arr_21 [i_6] [i_6] [i_1] [i_6] [i_0] = 13372;
                        var_33 = arr_19 [1] [i_1] [i_1] [i_1];
                    }
                    var_34 = (max(var_34, (((7455290285132726828 ? 1 : 137)))));
                    var_35 = ((var_3 ? (arr_0 [i_1] [i_1]) : ((~(arr_0 [i_0] [i_0])))));
                    var_36 = var_4;

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_37 = (((((~(max(-1366146557, var_15))))) ? (((arr_24 [i_1] [i_2]) ? ((~(arr_25 [i_0] [i_0] [i_1] [i_2] [1] [1]))) : 1)) : (arr_25 [i_0] [i_1] [i_2] [i_8] [i_1] [i_2])));
                        var_38 = arr_24 [i_0] [8];
                        var_39 = (min(var_39, 10991453788576824781));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_40 += (~50);
                            var_41 = (((((var_12 ? var_3 : -7813037546663137021))) ? 51144 : var_1));
                            var_42 = (arr_14 [i_1] [3]);
                            arr_30 [0] [i_1] [i_1] [i_1] [i_1] [i_8] = (arr_17 [i_8] [i_1] [i_8] [i_8] [i_8] [i_9]);
                            var_43 = var_2;
                        }
                        var_44 = ((65 ? (7455290285132726823 & 47) : (arr_1 [5])));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_45 += ((((((arr_17 [8] [i_0] [i_1] [i_2] [4] [i_10]) ? (arr_26 [8] [i_2]) : var_6))) ? (arr_26 [i_2] [i_10]) : ((-(arr_3 [i_10])))));
                        var_46 = 58733601406976089;
                        var_47 = (((((7455290285132726835 ? 125 : 11056147298068084487))) ? ((var_3 ? (arr_11 [i_0] [i_1] [i_2] [i_10]) : 41479)) : ((0 ? (arr_11 [i_0] [i_0] [i_2] [i_10]) : var_11))));
                        arr_33 [i_0] [i_0] [i_2] [i_2] [i_10] [i_10] = (arr_31 [i_10] [1] [i_1] [i_10]);
                    }
                }
            }
        }
    }
    var_48 = ((var_1 ? var_4 : 66));
    #pragma endscop
}
