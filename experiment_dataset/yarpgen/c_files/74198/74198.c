/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((!((min(((var_0 ? var_4 : var_9)), (max(var_9, var_8)))))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 ^= ((((~(((arr_0 [i_0 - 2] [i_0]) ? (arr_0 [18] [i_0 + 3]) : (arr_0 [i_0] [i_0])))))) ? (max((!var_9), (((arr_1 [6]) ? (arr_0 [i_0] [i_0]) : var_8)))) : (arr_1 [16]));
        var_15 = (max(((var_8 ? var_7 : (arr_1 [i_0]))), (((arr_0 [i_0] [i_0]) + var_2))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = ((((var_7 == var_10) < (arr_4 [i_0 - 4] [i_0 - 2]))) ? (((var_10 > ((min(var_10, var_3)))))) : ((((((arr_1 [i_0]) ? (arr_0 [i_0 - 4] [i_1]) : var_2))) ? var_3 : var_1)));
            var_17 = (min(var_17, (((!(arr_2 [i_0] [i_0 - 3]))))));
            arr_5 [i_0] [i_0] = (max((arr_0 [i_0 + 2] [i_1]), (((arr_0 [i_0 + 1] [i_0 + 1]) ? var_4 : (arr_0 [i_0 - 3] [i_1])))));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_0] = ((((((arr_7 [i_2 - 1]) ? var_12 : (arr_3 [i_0] [i_0 + 3] [i_0 + 3])))) ? (arr_7 [i_2 + 1]) : (arr_7 [i_2 - 1])));
            arr_9 [i_0] = ((var_11 ? ((((((arr_6 [i_0] [i_2]) ? var_12 : (arr_1 [i_0])))) ? ((max(var_9, var_6))) : ((max((arr_7 [i_2]), var_3))))) : ((((max((arr_7 [i_0]), var_10))) * (max(var_1, (arr_3 [i_0] [i_0] [i_0])))))));
            var_18 = (((((((arr_6 [i_0 - 4] [i_2]) ? (arr_0 [i_2] [i_0]) : (arr_7 [i_0])))) ? ((var_0 ? (arr_3 [i_0] [i_2] [i_0]) : var_6)) : var_3)));
            var_19 += ((!(arr_6 [i_0 + 3] [i_2 - 1])));
            arr_10 [i_2] [i_0] [i_0] = (arr_2 [i_0] [i_2]);
        }
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, -var_2));
        var_21 = (12919803764734308049 / 87);
        var_22 ^= (!(((-(arr_3 [4] [4] [4])))));
        var_23 += ((~((((((arr_2 [i_3] [i_3]) ? var_3 : var_12))) ? ((-(arr_6 [i_3 + 2] [i_3 - 4]))) : (max(var_8, var_9))))));
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_23 [i_7] [i_6] [i_6] [i_4] = ((((arr_1 [i_6]) > (max((arr_15 [i_4] [i_5]), var_8)))));
                        var_24 = max(((min(var_5, (arr_3 [i_6] [i_6] [i_7])))), ((var_0 ? ((var_11 ? var_0 : var_1)) : (var_2 / var_12))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((var_10 ^ (((((arr_20 [i_5]) / (arr_2 [2] [i_6])))))));
                        var_25 = (min(((!(arr_15 [i_4 - 2] [i_6 - 1]))), ((!(arr_15 [i_4 - 4] [i_6 + 3])))));
                        var_26 = (max(var_26, ((((((max(var_6, (arr_22 [i_4] [i_4] [i_5] [i_4] [i_7] [i_4]))))) ? var_5 : (((var_7 / (arr_19 [i_4 - 2] [i_4 - 2] [i_6])))))))));
                    }
                }
            }
        }
        var_27 = (min(var_27, (((((((arr_20 [i_4 - 1]) - (arr_1 [4])))) ? var_3 : (max((arr_4 [i_4] [i_4]), (((~(arr_15 [i_4] [i_4])))))))))));
        arr_25 [i_4] &= var_3;
        arr_26 [i_4] [i_4 + 3] = (min((((arr_13 [i_4]) ? (arr_12 [i_4 - 1]) : var_2)), ((((arr_14 [i_4 + 1] [i_4 - 4]) || (arr_7 [i_4 - 2]))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_35 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_8] [i_10] = (min((arr_13 [i_4 + 2]), (max((arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 1]), (arr_16 [i_4 + 1] [i_4 + 1] [i_4 - 1])))));
                        arr_36 [i_4] [i_8] [i_4] [i_10] [i_8] [i_4 + 1] = (arr_3 [i_8] [i_4] [i_8]);
                        var_28 = (min(var_28, (max((((arr_31 [i_4 - 1] [i_4 + 1]) ? (((!(arr_15 [i_4] [i_8])))) : (arr_11 [i_10]))), ((-(arr_6 [i_4 - 1] [i_4 + 1])))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {
        var_29 ^= (((((-((min(var_6, (arr_18 [i_11]))))))) ? (((+((((arr_15 [i_11] [i_11 - 1]) <= var_2)))))) : ((~(max((arr_4 [i_11] [i_11]), var_4))))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {

            for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
            {
                arr_45 [i_11] [i_12] [i_13] = (((arr_20 [i_13 - 1]) & (arr_20 [i_13 - 2])));
                var_30 = var_12;
                arr_46 [i_13] = (~(arr_14 [i_11 + 2] [i_13 + 2]));
                var_31 = (arr_13 [i_11]);
                arr_47 [i_11] [i_12] [i_13] [i_13] = (var_12 + var_11);
            }
            for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
            {
                arr_50 [i_11] [i_11] [i_14] [3] = ((((((arr_44 [i_12] [i_14]) & (arr_0 [i_12] [i_14])))) ? (!var_9) : (((arr_15 [i_11] [i_11]) ? (arr_22 [i_11] [i_11] [i_14] [i_14] [i_14] [i_14]) : (arr_48 [i_11] [i_12] [i_12])))));
                arr_51 [i_14] [i_12] [i_11] = (arr_41 [i_11] [i_11] [i_14] [i_11]);
                arr_52 [i_14] [i_11] [i_11] &= var_12;
            }
            for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
            {
                arr_55 [i_11] [i_12] [i_11] = (((((12919803764734308027 ? 1014603718127765378 : 0))) ? 0 : -62742991));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_32 = (arr_60 [i_16] [i_15 - 2] [i_11 + 2] [i_11] [i_11]);
                            var_33 = ((-(arr_3 [i_15] [i_11] [i_15])));
                            arr_61 [i_16] [i_16] [i_16] [i_16] &= ((((((arr_42 [i_11] [i_11] [i_15] [i_15]) ? (arr_19 [i_11] [i_15] [i_15]) : var_0))) <= var_11));
                            arr_62 [i_11] [i_11] [i_15] [i_16] [i_16] = (+(((arr_22 [i_11] [i_12] [i_15] [i_16] [i_16] [i_17]) ? (arr_20 [i_17]) : (arr_1 [i_15]))));
                            var_34 = (((arr_39 [i_11 - 2] [1] [i_15 + 3]) ^ ((var_7 * (arr_54 [i_12] [i_12] [i_16])))));
                        }
                    }
                }
                var_35 ^= (arr_41 [i_11] [i_11] [i_15 + 3] [i_11]);
            }
            var_36 ^= (((arr_20 [i_11]) < (arr_20 [i_11])));
            arr_63 [i_11] [i_12] [i_12] = ((var_12 ? (arr_27 [i_11] [i_11 + 2]) : (arr_15 [i_11] [i_11 + 2])));
            arr_64 [i_11] [i_12] = ((var_10 - (arr_29 [i_11 - 1] [i_11 + 2])));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                {
                    arr_71 [i_19] [i_18] [i_19] = ((max((var_2 <= var_2), (var_2 && var_8))));
                    var_37 ^= (((arr_1 [8]) ? ((var_10 << (((arr_12 [i_11 + 2]) + 108)))) : ((~(!var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
