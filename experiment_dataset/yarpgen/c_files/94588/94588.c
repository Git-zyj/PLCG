/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_12 = var_3;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((max((-2147483647 - 1), -4158578767114032307)))));
                        var_14 = ((var_6 ? var_3 : ((var_11 % (arr_2 [i_0 - 1])))));
                        var_15 = ((((min(var_1, 239))) ? (((arr_13 [i_0] [i_0 + 2] [i_2 + 2]) ? 17 : var_3)) : (arr_6 [i_1] [i_0 + 1])));
                    }
                }
            }
            var_16 |= ((var_2 / var_8) ? (arr_7 [i_0] [i_0 + 2] [i_0]) : ((0 ? -4158578767114032320 : (arr_7 [i_0] [i_0 + 1] [i_1 - 1]))));

            for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_19 [i_1] = (((arr_13 [i_0 + 1] [i_1 - 1] [i_4 + 2]) ? var_5 : ((var_7 ? var_8 : 449944375))));

                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] = (((((-(arr_8 [i_5] [i_5 - 1] [i_5] [i_5])))) ? ((((((arr_12 [i_0] [i_4] [i_4]) && (arr_7 [i_0 - 1] [i_1] [i_5]))) ? var_5 : 183611590))) : (((arr_6 [i_0 - 1] [i_1]) ? (max(var_10, var_8)) : var_10))));
                    arr_23 [i_1] = ((var_6 != (((49393 ? 1281008508 : var_1)))));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_17 = var_1;
                    var_18 = (min(var_18, 552256895));
                    var_19 |= var_1;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_20 = (((((var_3 ? (arr_11 [i_0 - 2] [i_4 + 2]) : var_6))) || ((min(0, (arr_11 [i_0 + 1] [i_4 + 1]))))));
                    arr_29 [i_0] [i_1] [i_0] [i_0 - 1] [i_0 - 1] = (max(((((max(11821563872571496934, 1))) ? (arr_20 [i_4 + 2] [10] [i_4] [i_4]) : (arr_8 [i_0 - 1] [i_1 + 1] [i_4 + 2] [i_4 + 2]))), (((((-7330 ? var_10 : -39)) | (~var_2))))));
                }
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_21 = var_3;
                        arr_35 [i_0] [10] [i_1] [i_1 + 1] [i_0] = ((8 & (arr_2 [i_4 + 2])));
                        var_22 = ((var_6 + (arr_9 [i_8 + 1] [i_4 + 1] [i_4] [i_1 + 1])));
                        arr_36 [i_0] [i_0] [i_1] [20] [i_9] [i_8] = var_9;
                    }
                    var_23 &= var_2;
                    var_24 -= ((!(var_8 && 1585644005)));
                }
                arr_37 [i_0] [i_1] [i_4] = (max(-10667, -22795));
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    var_25 = ((60 ? 60 : 6625180201138054682));
                    var_26 = (((arr_41 [i_10 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 2]) >> (1973839220 - 1973839172)));
                }
                arr_44 [i_1] = (((arr_9 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_10]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_10 + 2] [i_0 - 2]) : var_6));
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
            {
                var_27 = -var_1;
                var_28 = (arr_12 [i_12] [i_1] [i_1 - 1]);
            }
        }
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_29 = var_3;
            var_30 = ((((max(39, 8507568626325124206)) & (((max(1, var_1)))))));
        }
        var_31 ^= ((!((max(var_0, (arr_7 [4] [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_32 = var_9;
        arr_52 [i_14] = ((1577249915 ? 897795759 : 2965678349));
        arr_53 [i_14] = var_4;
    }
    var_33 += (((((var_1 ? var_10 : -183611563))) != var_8));
    var_34 = var_4;
    #pragma endscop
}
