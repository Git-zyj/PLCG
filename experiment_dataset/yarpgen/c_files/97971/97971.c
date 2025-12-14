/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -4741871616458293497;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = (((arr_1 [i_2] [i_0]) / (-2147483647 - 1)));
                    var_15 *= (arr_4 [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_16 += (arr_7 [i_3]);
                    var_17 *= arr_10 [i_3] [i_3];
                    arr_11 [i_0] [i_1] = (--1960214785);
                }
                for (int i_4 = 4; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = -1960214786;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_5] [i_1] [i_4] [i_1] [i_0] [i_0] &= (((arr_2 [i_0] [i_0] [i_0]) ? -1960214785 : ((~((1960214801 >> (13040 - 13033)))))));
                                arr_21 [i_0] [i_1] [i_4] [i_4] [7] = (((-(arr_1 [i_4 - 2] [i_4 - 1]))));
                                var_18 &= (arr_10 [i_1] [i_6]);
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_1] [i_0] = ((!(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] [i_0] [i_8] = -1960214785;
                                var_19 = (max(var_19, (arr_24 [i_0] [i_0] [i_0] [i_0])));
                                arr_30 [i_1] [i_0] [i_8] = ((!((((arr_16 [i_0] [i_4] [i_7] [i_8]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_18 [i_0] [i_8] [i_8] [i_8] [i_0]))))));
                            }
                        }
                    }
                }
                var_20 = ((+(((((((arr_25 [18] [i_1]) % var_7))) || (arr_12 [i_0] [i_0] [11] [i_0]))))));
                var_21 = (arr_9 [i_0] [i_1] [i_0] [i_1]);
            }
        }
    }
    var_22 *= (((((((var_9 + (-2147483647 - 1)))) ? (var_6 + var_10) : -147))) - var_4);
    var_23 = (!-1960214775);
    #pragma endscop
}
