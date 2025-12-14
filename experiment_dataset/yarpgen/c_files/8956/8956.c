/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-5956713147266864863 && var_4) || 92547382631808014)) && (((max(2113929216, -1520551971))))));
    var_21 &= (max(40601, ((198 / (18354196691077743608 * var_11)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_22 = (max(var_22, ((min(590934225, 0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2 + 2] &= (((arr_8 [i_0 + 1] [i_0 + 1] [i_2]) != (((arr_8 [i_0] [i_0 - 1] [i_2]) ? var_13 : 18354196691077743602))));
                    var_23 = (!1);
                }
            }
        }
        var_24 *= (((-1526175935 + 2147483647) >> 0));
        var_25 = (min(var_25, (((((((max(6752, var_9))) != (((arr_9 [i_0]) ? 92547382631808014 : var_19)))) ? 18354196691077743602 : (arr_8 [i_0] [i_0] [i_0 - 1]))))));

        for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_26 = 1;
            arr_13 [i_0 - 2] [i_3 + 2] [i_3 + 2] = 1;
            arr_14 [i_0] [i_3 - 3] [i_3 - 1] = 18354196691077743602;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_27 = var_5;
                        arr_20 [i_0] [i_3] [i_4] [i_5] = (((var_19 * (arr_8 [i_0 - 3] [i_3] [i_5]))));
                        var_28 ^= (~-31718);
                        var_29 = var_5;
                        var_30 = (min(var_30, (((arr_15 [i_0] [6] [i_5]) & (144 >= -65534)))));
                    }
                }
            }
            var_31 *= var_8;
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_6] = (((((151 ? var_12 : 10))) ? -var_19 : ((-(arr_12 [i_0] [i_6])))));
            arr_25 [i_0] = var_13;
            var_32 *= (arr_0 [i_6 + 1]);
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_28 [1] = (min((((arr_15 [i_0 - 3] [i_0 + 1] [i_7]) / -1)), (((arr_26 [i_0 - 4] [i_0 - 4] [i_0 - 4]) % (arr_26 [i_0 - 4] [i_0 - 2] [i_0 - 3])))));
            var_33 = (max(var_33, (((+((((arr_11 [i_0] [i_7]) <= (((arr_21 [i_7]) >> (8731712628874665333 - 8731712628874665307)))))))))));
            var_34 = (max(var_34, (((((min(1, (arr_21 [i_0 - 3])))) - ((var_19 & (arr_21 [i_7]))))))));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_33 [i_0] = (((((-(0 <= 92547382631808007)))) || (((-594401341 / (arr_18 [i_0 - 1] [i_0 - 1] [i_8] [i_0 - 1] [i_8] [i_8]))))));
            var_35 = (max(var_35, 44));
        }
    }
    var_36 = max(-var_12, ((-(18354196691077743603 || 65527))));
    var_37 |= ((((-1668743126 ? (max(var_13, var_8)) : var_10)) <= var_17));
    #pragma endscop
}
