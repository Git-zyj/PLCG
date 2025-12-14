/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = (~var_11);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_14 = (max(var_14, (arr_3 [i_0] [i_1] [i_2])));
                    var_15 = var_1;
                    var_16 = (min(var_16, ((min((min((arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (min(789207738, (arr_3 [i_0] [i_0] [i_2]))))), (((var_0 & (arr_3 [i_0] [i_1 + 1] [i_2 - 1])))))))));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_17 = (min(var_17, ((max((((arr_1 [0]) ? (arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_1 [12]))), (25 && 18895))))));
                    var_18 = (((((arr_6 [i_3] [i_1] [22] [i_1]) | (2325 >= var_12)))) ? (~var_10) : (((arr_8 [i_0] [i_1 + 1] [9]) + (arr_4 [i_0] [i_0] [i_3 - 1]))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_19 = (286541762 + 79);
                    var_20 = (24 + 217);
                }
                for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_21 = var_6;
                    var_22 = (min(var_22, ((((!-42) ? (!var_0) : ((var_4 ? (arr_6 [i_5 - 1] [i_5 + 2] [i_5] [i_5]) : var_12)))))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_23 = ((((var_11 ? var_0 : (arr_16 [i_0] [i_5 + 1] [i_0] [i_0]))) > ((((min(-17533, 2303591209400008704)))))));
                        var_24 = ((+((((arr_13 [12] [11] [i_5] [1]) < -90)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, ((((arr_11 [i_5 - 1] [i_5] [i_1 + 1] [16]) > (arr_11 [i_5 - 1] [i_5 - 1] [i_1 + 1] [12]))))));
                        var_26 += (((0 * var_5) <= 13));
                        var_27 = (((((var_4 ? var_5 : 51))) < -var_3));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        var_28 |= ((-(arr_20 [i_8 - 1] [i_8] [i_5 + 1] [i_8] [i_0])));
                        var_29 |= (var_5 && var_12);
                        var_30 = (max(var_30, (-7748 && 0)));
                        var_31 = 0;
                        var_32 = ((11 ? (arr_4 [i_5 - 1] [i_0] [i_8 + 2]) : -var_8));
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_33 = ((~(((arr_3 [i_9] [i_1 + 1] [i_0]) << (((arr_3 [i_0] [i_0] [i_0]) - 15658))))));
                        var_34 = (min(((~(arr_19 [i_1] [i_1 + 1] [i_1 + 1] [19]))), (arr_14 [i_9 - 1])));
                        var_35 = ((((max(3, 230))) ^ 3315870382));
                        var_36 = (min(var_36, (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        var_37 &= ((-(min((4294967287 == 12127446122806301176), (max(var_1, 1130204589))))));
                    }
                    var_38 = (arr_14 [i_0]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_39 = (((1596748029 | (arr_20 [i_0] [i_0] [i_1 + 1] [i_0] [i_5 + 2]))));
                                var_40 ^= 215;
                                var_41 += (((((min(var_3, (arr_26 [i_0] [i_0] [14] [i_0] [i_11])))) ? 1 : ((var_2 ? var_12 : var_9)))));
                            }
                        }
                    }
                }
                var_42 = (((var_7 ? var_4 : (arr_20 [i_0] [i_0] [i_0] [i_1 + 1] [i_0]))));
            }
        }
    }
    var_43 = var_2;
    #pragma endscop
}
