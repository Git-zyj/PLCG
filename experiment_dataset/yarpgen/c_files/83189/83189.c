/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((-(min(var_4, var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = ((arr_1 [8] [i_0]) & (arr_0 [i_0]));
        arr_4 [0] &= (((arr_3 [i_0]) * (arr_3 [i_0])));
        arr_5 [i_0] [i_0] = 4257987333;
        var_14 += (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_6 [i_1 + 1] [i_1]);
        var_15 *= arr_1 [i_1 - 1] [i_1];
        var_16 = (((arr_1 [i_1] [i_1 - 1]) ? var_6 : (arr_7 [i_1])));
        var_17 &= ((!(arr_2 [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_18 = (min((arr_8 [i_2] [i_2]), (arr_7 [i_2])));
            arr_18 [i_2] [i_2] [i_2] = (((arr_7 [i_2]) >= (((min(var_7, (arr_10 [i_2] [i_3])))))));
            arr_19 [i_3] = (arr_6 [i_2] [i_2]);
            var_19 ^= ((-(min((arr_8 [i_2] [i_3]), var_6))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_23 [i_4] = ((((min((arr_17 [i_2] [9]), (arr_13 [i_2] [i_2])))) >= (min(((1 ? (arr_8 [i_2] [i_4]) : (arr_14 [i_4] [i_4] [i_2]))), ((min((arr_6 [i_2] [i_2]), (arr_16 [i_4] [i_2] [i_2]))))))));
            arr_24 [i_2] [i_2] = (arr_17 [i_2] [i_4]);
        }
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            var_20 = (arr_1 [i_2] [i_2]);
            var_21 = (max(var_21, (arr_0 [i_2])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_30 [i_6] = ((+(((arr_28 [i_2] [i_6]) ? (arr_28 [i_6] [i_2]) : (arr_28 [i_6] [i_2])))));
            arr_31 [i_2] [3] = ((127 ? 16072 : -8410566551528809523));
            arr_32 [i_2] [i_2] [i_2] = (min((arr_29 [i_6] [i_2]), (arr_8 [i_2] [i_6])));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    {
                        arr_39 [i_2] [i_2] [i_8] = ((!((min((arr_17 [i_2] [i_2]), (((!(arr_17 [i_2] [i_8])))))))));
                        arr_40 [i_9 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((((arr_14 [i_2] [i_2] [i_2]) ? var_3 : (arr_8 [i_2] [i_2])))) ? ((((arr_0 [i_9]) % (arr_2 [i_2])))) : (((arr_26 [i_2] [i_2]) & (arr_34 [i_7] [i_2]))))) ^ (arr_2 [i_2])));
                        arr_41 [i_8] [i_9 + 1] = (((((((32752 ? (arr_27 [i_2] [i_8] [i_9]) : (arr_8 [i_7] [i_8])))))) <= ((-(((arr_11 [i_2]) ? 0 : -5))))));
                        var_22 += min(((((!var_4) & (((!(arr_35 [i_2] [i_2] [i_2] [i_9]))))))), (arr_35 [i_2] [i_7] [i_7] [i_9]));
                    }
                }
            }
        }
        var_23 = (((-127 - 1) ? ((max((arr_38 [2] [i_2]), (-2147483647 - 1)))) : (arr_33 [i_2] [i_2] [i_2])));
    }
    var_24 += var_10;
    #pragma endscop
}
