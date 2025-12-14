/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((40 ? 40 : var_9));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_21 = var_7;
                        arr_11 [i_0] [i_0] = (var_1 ^ (arr_9 [i_3] [i_3] [i_3 + 1] [i_3 - 1]));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0] = (arr_4 [i_0] [i_0]);
                        arr_15 [i_1] [6] [i_0] [i_0] [i_1] [i_0] = ((!(arr_9 [11] [i_1] [i_1] [i_4])));
                        arr_16 [i_0] [i_1] [i_0] [i_2] [i_2] [i_0] = -136787213;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [13] [5] [i_0] [i_0] [i_0] = -1;

                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_22 = (!(arr_19 [i_0]));
                            var_23 = var_12;
                            var_24 = (arr_1 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_0] [5] [i_7] = 151;
                            var_25 = var_9;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_26 = (((arr_23 [i_8] [i_0] [1] [i_0] [1]) ? (arr_12 [i_0] [i_5] [13] [i_0]) : (arr_12 [i_0] [i_1] [13] [i_0])));
                            var_27 = (arr_10 [i_2] [i_5] [i_8]);
                            var_28 = (max(var_28, (151 < -4529905243003158074)));
                        }

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_29 = (!1);
                            arr_34 [i_0] [i_0] [i_1] [i_0] [6] [i_9] = 7;
                            arr_35 [12] [12] [i_1] [i_0] [i_2] [i_5] [12] = 148;
                            var_30 = (!var_7);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [9] [i_0] [i_2] [1] = (-4529905243003158092 % 7059182537950023838);
                            var_31 = (!(arr_2 [8]));
                        }
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_1] [i_2] [i_11] = (~var_12);
                        arr_45 [i_0] [i_2] [i_11] = ((7946033209598151085 ? (arr_6 [i_2]) : 216));
                        arr_46 [1] [10] [i_2] [i_0] [3] [5] = (arr_39 [i_11] [i_0] [i_1] [i_0] [i_0]);
                    }
                    arr_47 [13] [i_1] [i_0] = arr_1 [i_0];
                }
            }
        }
        var_32 = (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = (((((1 << (var_15 + 6708)))) ? (!30) : (((arr_1 [i_12]) ? var_15 : 46))));
        var_33 ^= (((((-(0 + 40)))) ? 1 : var_2));
        var_34 = (min((!-7970044664223577512), 11387561535759527776));
        arr_51 [i_12] [i_12] = (min((((55 && (arr_33 [4] [i_12] [12] [i_12] [i_12] [i_12] [i_12]))), (min(1016469596, 94)))));
    }
    var_35 = (min(1411086010, (((!(var_6 == var_12))))));
    var_36 = ((((min(((min(1, 2864174051))), 13093511982941720516))) ? 31 : 122));
    #pragma endscop
}
