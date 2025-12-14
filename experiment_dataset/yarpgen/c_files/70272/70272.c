/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((max(67, var_2))) : (((~var_7) ^ (arr_1 [i_0])))));
        var_17 ^= (arr_1 [8]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 &= -1;
        arr_5 [i_1] = ((-(min((min(var_15, (arr_3 [i_1]))), (((var_12 ? var_13 : (arr_1 [0]))))))));
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (((arr_7 [i_2]) <= (arr_9 [i_2])));
        arr_10 [i_2] |= (-31 ? -752684798 : -var_12);
        var_20 &= ((+((-(((arr_8 [i_2]) ? var_12 : 1662223463))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_21 = (arr_16 [i_3] [i_4]);
                arr_18 [i_3] = (arr_13 [i_3] [i_3]);
            }
            var_22 = 2416939161;
        }
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            var_23 -= ((((max((min((arr_13 [i_3] [i_6]), var_3)), (13634 | 1)))) ? -var_2 : ((((~var_6) != (~1))))));
            arr_21 [i_3] [i_3] = ((var_9 ? (arr_11 [i_3]) : ((+(max((arr_19 [i_3] [i_3]), var_14))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_24 = max((((arr_15 [i_6] [i_3]) / 8080)), (((166 || 1) / var_4)));
                        var_25 = (min((((arr_13 [i_6 - 4] [i_3]) || (arr_15 [i_6 - 1] [i_3]))), ((!(arr_15 [i_6 + 1] [i_3])))));
                    }
                }
            }
        }
        var_26 *= (min((min((min((arr_15 [i_3] [14]), 14)), 1)), (((min(4690716481419167966, (arr_12 [16])))))));
        arr_26 [i_3] = var_13;
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_27 = (min(var_27, var_12));
            arr_34 [i_10] [i_9] [i_9] = ((var_8 ? (arr_6 [i_9 + 2]) : (arr_6 [i_9 + 2])));
            var_28 = (min(var_28, ((((arr_32 [i_9 + 3]) ? (arr_12 [14]) : (arr_16 [i_10] [i_10]))))));
            var_29 &= arr_23 [10] [10];
            var_30 = (max(var_30, var_7));
        }
        arr_35 [i_9] = (arr_11 [i_9]);
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] [i_9] = (max(((var_0 ? ((max((arr_11 [i_9]), 250))) : (((var_0 == (arr_13 [i_12] [i_9])))))), var_9));
                        var_31 = (min(var_31, (((-(min(var_2, ((((arr_16 [i_12] [i_12]) <= 0))))))))));
                        var_32 |= (arr_27 [i_12]);
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        var_33 = ((min((arr_44 [i_14]), (arr_44 [i_14]))));
        var_34 = (min(var_34, 4294967287));
        var_35 = (arr_46 [i_14]);
        var_36 = (var_0 << (var_7 - 22555));
    }
    #pragma endscop
}
