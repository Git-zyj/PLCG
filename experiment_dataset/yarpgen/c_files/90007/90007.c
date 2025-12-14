/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((7470289398566112305 / 32757) * (var_4 * var_13))) >> ((min((var_13 || var_6), (max(var_11, var_7)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((var_12 ? (arr_1 [i_0]) : -113)));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (0 ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2]));

            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                arr_9 [4] [i_1] [i_1] [i_1] = (((-125 ? 9223372036854775807 : 10632521589404065730)) == ((((!(arr_8 [i_1] [i_0]))))));
                var_21 &= ((((var_15 ? var_17 : (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? var_13 : (arr_4 [i_2]));
                var_22 = (((0 < 192549225053052451) ? 1882675964 : ((var_0 ^ (arr_3 [i_0] [i_1] [i_2 + 1])))));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_12 [i_3] [i_3] [i_3] [10] = (var_3 % 2412291346);
                arr_13 [i_1 - 1] [i_3] [12] [i_0] = var_6;
                var_23 |= (((arr_6 [i_0] [i_0] [i_1 + 2] [i_3]) == (arr_7 [i_3] [i_1 - 1] [i_1 + 1] [i_1 + 1])));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_24 = ((var_0 ^ (arr_7 [i_1 + 2] [i_1] [i_4] [i_0])));
                arr_16 [i_0] = ((((((arr_11 [i_0] [i_0] [i_0]) - 117))) ? (arr_14 [i_0] [i_1 - 1] [1]) : (((arr_1 [i_4]) >> var_13))));
                arr_17 [i_4] [i_1] = var_11;
            }
        }
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_24 [i_5] [i_5 - 1] [i_6] = ((((!(((var_13 ? var_7 : 64)))))) / (var_12 != var_8));
                var_25 = (((arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? (arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_26 = var_17;
                            var_27 = ((((-(4 * 730220266503540841))) >> ((max((min((arr_21 [i_0] [4] [i_6] [i_8 + 3]), (arr_4 [i_8 - 1]))), (var_5 < 61))))));
                            arr_32 [i_0] [i_8 + 3] [i_6] [i_5] [i_8] [i_5] = (arr_2 [i_6]);
                            var_28 = (((arr_15 [i_0] [i_5 - 1] [5]) ? var_11 : (((((max(-1, 7162288545987350743))) && ((min(var_15, var_5))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_29 = (((max(45755, (min(4294967295, 1)))) >= ((((arr_15 [i_10] [i_9] [i_0]) ? (arr_8 [i_10] [i_5 + 1]) : var_2)))));
                        var_30 ^= (max((7577 < 86), 8064));
                    }
                }
            }
            var_31 &= var_6;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_32 &= (min(107, -10));
            arr_41 [i_0] = ((-((((max((arr_19 [i_0]), var_11)) <= ((((arr_25 [i_0] [i_0] [i_11]) ? 112 : var_7))))))));
        }
    }
    for (int i_12 = 3; i_12 < 13;i_12 += 1)
    {
        var_33 = (max(var_16, ((~((min((arr_45 [i_12] [i_12 - 2]), var_12)))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    arr_54 [i_12] [i_12 + 2] [i_12 + 1] [3] = ((+(max((arr_50 [i_14] [i_13] [i_12] [i_12]), (var_5 || 8428883770621108624)))));
                    arr_55 [i_12 + 1] [i_12 - 1] [i_12] = var_15;

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_34 = (((arr_43 [i_12 + 1]) ? 50 : ((~(arr_45 [i_12 + 2] [i_14])))));
                        arr_58 [i_12] [i_13] [i_14] [i_15] [i_15] = ((var_1 / (arr_49 [10] [i_12 - 3])));
                        arr_59 [i_13 + 1] [i_14] [i_15] = ((!(arr_57 [i_13 + 1] [i_15] [i_15] [i_15])));
                    }
                }
            }
        }
        arr_60 [i_12 + 1] = (max(1, -7636028169153881430));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_35 -= ((((((arr_2 [i_16]) ? 29 : var_12))) ? (arr_18 [i_16] [2]) : var_8));
        arr_63 [2] |= (((arr_8 [i_16] [i_16]) ^ (arr_29 [i_16] [i_16] [i_16] [i_16] [i_16])));
    }
    var_36 = ((((var_6 ? (!12) : var_11)) == var_10));
    var_37 ^= 769582428;
    #pragma endscop
}
