/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((~(((~(arr_0 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 &= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])));
            var_16 = (arr_0 [i_0]);
        }
        var_17 *= (max(((((arr_1 [i_0] [i_0]) >= (arr_3 [i_0] [i_0])))), var_3));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = var_0;
        arr_9 [i_2] [i_2] = arr_2 [i_2];
        arr_10 [i_2] = (((!(arr_5 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (!var_12)));
        var_19 = (arr_12 [i_3 + 1]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_11 [i_4])));
        var_21 = 98304;
        var_22 = (max(var_22, -0));
    }
    var_23 += var_10;

    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
    {
        var_24 -= ((~(!var_9)));
        var_25 = 5287160207771635443;
        arr_19 [i_5] = (((arr_3 [i_5] [i_5 - 1]) ? (arr_3 [i_5 + 1] [i_5 + 1]) : (arr_13 [i_5 - 2])));
        arr_20 [i_5] = (arr_18 [i_5 + 1]);
        var_26 ^= 10;
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6 - 3] = (0 > -10);

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {

            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                var_27 = (max(var_27, (~10)));
                arr_31 [i_6 - 1] [i_6] = (!-9);
                arr_32 [i_6] [i_7] [i_6] = (~3407976047026485078);
            }
            var_28 *= var_5;
            var_29 = (min((arr_3 [i_7 - 1] [i_7]), ((var_1 ? (arr_3 [i_7 - 4] [i_7]) : (arr_3 [i_7 - 4] [i_7 + 1])))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_30 = (max(var_30, (((-(arr_5 [i_6 - 2] [i_9]))))));
            var_31 = var_10;
            arr_35 [i_6 + 1] [i_6] [i_6] = arr_14 [i_9];
            var_32 = (arr_26 [i_6 - 2] [i_6] [i_6]);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_33 = ((+(((arr_5 [i_6 + 1] [i_10]) ? (arr_5 [i_10] [i_6 - 3]) : (arr_5 [i_10] [i_6 - 2])))));
            arr_39 [i_6] = var_1;
            var_34 ^= (((((((-(arr_11 [i_6 - 3])))) ? (arr_29 [i_6] [i_10] [i_10]) : (arr_14 [i_6])))) ? (arr_24 [i_6 - 3] [i_6 - 3]) : var_10);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            arr_44 [i_11] [i_6] = 10;
            var_35 = (max(var_35, var_2));

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_36 = (min(var_36, var_2));
                var_37 = (arr_4 [i_6] [i_11]);
                arr_48 [i_6] [i_6] = -17984813666028131819;
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_38 = (arr_51 [i_6] [i_6 + 1] [i_6 - 3] [i_11]);
                var_39 = (arr_7 [i_6 - 1]);
            }
        }
        var_40 = (max(var_40, -5287160207771635442));
    }
    #pragma endscop
}
