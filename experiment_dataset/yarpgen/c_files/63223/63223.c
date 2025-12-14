/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_0] = ((3373179494 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
            var_13 -= (((arr_2 [i_0]) ? (((((arr_2 [i_1]) || (arr_2 [i_1]))))) : (var_7 - 921787801)));
            var_14 = (arr_2 [i_1]);
            arr_5 [15] [i_0] [i_0] = (var_2 / -944974929);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_15 = (arr_6 [i_0]);
                arr_10 [i_0] [i_3] [i_0] [i_0] = (arr_9 [i_3] [i_3] [i_3 + 1]);
            }
            var_16 = (arr_2 [i_0]);

            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_17 = (max(var_17, (arr_16 [i_5] [i_5 + 1] [i_4] [i_2] [i_0] [i_0])));
                    var_18 = (arr_14 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2]);

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 &= -var_1;
                        var_20 = (max(var_20, ((((arr_13 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 1]) ? (arr_20 [i_5 - 2] [i_5] [i_6] [i_5]) : (arr_13 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2]))))));
                        var_21 = (((arr_11 [i_0] [i_2] [i_5 - 2]) < (arr_13 [i_5 - 1] [i_5 + 1] [i_5 - 2] [i_5 - 1])));
                    }
                }
                arr_21 [4] = (arr_19 [0] [1] [i_4] [i_4] [i_4] [i_4] [i_0]);
                var_22 = arr_2 [i_0];

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_23 ^= (((arr_8 [i_2] [i_2] [i_2] [i_2]) < (arr_17 [4] [i_2] [i_2] [i_4] [i_4] [i_7])));
                    var_24 += (((arr_23 [0]) ? (arr_7 [i_2] [i_2] [i_2]) : (arr_23 [i_0])));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    var_25 = (arr_2 [i_4]);
                    var_26 = (arr_22 [i_8] [i_4] [i_2] [i_0] [i_0]);
                }
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_27 = (max(var_27, (arr_2 [i_0])));
                var_28 = (max(var_28, (arr_16 [i_0] [i_9] [i_2] [i_2] [i_0] [i_0])));
                var_29 = (arr_3 [i_2] [i_2]);
                var_30 = (arr_1 [11] [i_0]);
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_32 [i_0] [i_10] = (((((arr_11 [i_10] [i_0] [i_0]) == (arr_30 [i_0] [i_0] [5]))) ? ((-944974929 / (arr_3 [i_0] [2]))) : (arr_20 [i_0] [i_0] [i_0] [i_0])));
            arr_33 [i_0] [i_10] = (arr_1 [i_0] [i_0]);
            var_31 = (min(var_31, (~65530)));
        }
        var_32 = (arr_3 [i_0] [i_0]);

        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            var_33 ^= 3373179494;
            var_34 += (arr_1 [i_11 + 3] [i_11 + 3]);
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 22;i_14 += 1)
            {
                {
                    arr_44 [i_14] [i_14] [i_14] [i_12] = ((((arr_39 [i_12]) ^ (((3373179512 ? 65520 : 509073671))))));
                    arr_45 [i_12] [i_14] [i_12] [i_14 - 1] = (arr_40 [i_12] [i_13] [i_14 - 1]);
                    var_35 &= ((-(arr_40 [i_14 + 1] [i_14 + 1] [i_14])));
                }
            }
        }
        var_36 = (((((-(arr_39 [i_12])))) ? (((arr_39 [i_12]) ? (arr_41 [i_12] [i_12]) : (arr_41 [i_12] [i_12]))) : (((((arr_41 [i_12] [i_12]) || (arr_41 [i_12] [i_12])))))));
        var_37 = var_9;
    }
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        var_38 = (((arr_37 [i_15] [i_15 - 2]) % (arr_47 [i_15 + 1] [i_15])));
        arr_49 [i_15 + 1] = (min((arr_39 [i_15 - 1]), ((max((arr_46 [i_15 + 2]), (arr_40 [i_15 - 1] [i_15 + 1] [i_15 + 2]))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_54 [i_16] [i_16] = ((arr_12 [i_16] [i_16]) == (arr_12 [i_16] [i_16]));
        var_39 *= (arr_8 [i_16] [13] [i_16] [i_16]);
        var_40 = ((var_0 ? (((arr_31 [i_16] [i_16]) ^ (arr_25 [i_16] [i_16] [i_16] [i_16]))) : ((((arr_26 [i_16] [i_16] [i_16] [i_16]) ? (arr_0 [i_16] [i_16]) : (arr_43 [i_16] [i_16] [i_16] [i_16]))))));
        var_41 = 24;
    }
    var_42 |= var_10;
    #pragma endscop
}
