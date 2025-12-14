/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((~((var_9 ^ (arr_0 [i_0])))));
        var_13 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = (max(var_14, (~var_3)));
        var_15 = (((arr_7 [i_1]) ? (arr_7 [i_1]) : var_2));
        arr_8 [i_1] = (((((arr_1 [i_1]) + (arr_4 [1] [1]))) & (arr_5 [i_1])));
        var_16 ^= (((arr_2 [i_1]) | (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_17 = (min(((((arr_2 [i_2]) & var_4))), (min(var_9, var_9))));
            var_18 = (min(var_18, (arr_9 [4])));
            var_19 -= (arr_7 [i_3]);
            var_20 ^= var_1;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_2] = (-var_2 ? (var_12 != var_4) : 4177263589);

            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                var_21 = (arr_11 [i_2]);
                var_22 = ((var_4 % (((arr_16 [i_2] [i_2] [i_2]) ^ var_5))));
            }
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                var_23 = ((+(((arr_6 [i_2] [i_2]) ? (arr_6 [i_6 - 1] [i_4]) : var_5))));
                var_24 = var_3;
                var_25 = ((((var_11 > (arr_1 [i_2]))) ? 17087253049836867170 : ((var_9 ^ (arr_0 [3])))));
                arr_24 [8] = var_9;
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            var_26 ^= var_11;
                            var_27 = (arr_14 [i_4 + 1]);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_36 [i_10] [1] [i_8] [1] [i_2] = ((0 ? ((-(arr_34 [i_2] [i_2] [i_2] [i_8] [i_10] [i_10] [4]))) : (var_2 || var_12)));
                            var_28 = (min(var_28, (((var_9 <= (((arr_4 [i_8] [i_10]) + 17087253049836867170)))))));
                        }
                        arr_37 [i_8] [i_8] [2] [i_8] = (((arr_9 [i_4 + 1]) ? (arr_1 [i_7 + 2]) : (arr_15 [i_4] [i_4 + 1])));
                        var_29 += (((((arr_10 [i_2]) != var_1)) ? var_0 : var_8));
                    }
                }
            }
        }
        var_30 = (((((var_3 ^ (arr_21 [i_2])))) ? (min((((arr_23 [i_2] [i_2] [i_2]) ? var_6 : (arr_25 [i_2] [i_2] [i_2] [i_2]))), ((((arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) & var_6))))) : (((-(arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        arr_38 [i_2] [i_2] = 5;
        arr_39 [i_2] |= -var_10;
    }
    var_31 = (min(var_31, (min((min(var_10, (var_11 - var_5))), var_10))));
    var_32 = (1 % var_0);
    #pragma endscop
}
