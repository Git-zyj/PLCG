/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = 0;
    var_13 ^= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, 1));
        var_15 = 2661622073159353482;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = (min(4095, (--65535)));
        arr_4 [i_1] &= ((-(((min(-1, 3495))))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_17 += (max(-8484531256866170770, (((97 ? (!var_6) : (65535 + var_7))))));
                            var_18 = 4294967295;
                            var_19 = 4081660301;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, (((+(((arr_14 [i_4 - 1] [i_5]) ? -18913 : var_0)))))));
                            var_21 = var_7;
                        }
                        for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            arr_22 [i_2] [i_8 - 2] = ((var_1 << (32050 - 32034)));
                            var_22 -= -65535;
                            var_23 = var_0;
                            var_24 = (min(var_24, (((+(((-3512 + 2147483647) >> 7)))))));
                        }
                        for (int i_9 = 4; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_5] [i_4 - 1] [i_3] [i_2] = ((23518 >> (-var_1 + 3709)));
                            var_25 ^= ((-((max((arr_11 [i_2 + 2] [i_2 - 1] [i_4 - 2]), (arr_11 [i_2] [i_2 - 2] [i_4 + 1]))))));
                        }
                        var_26 = ((var_5 ? (((-((-(arr_12 [i_2] [i_2] [i_2])))))) : (((arr_5 [i_2]) ? 3799388275 : var_6))));
                        var_27 = var_2;
                        arr_26 [i_4] [i_2] [i_4] [i_5] = ((((2661622073159353481 ? var_1 : var_10)) * 1));
                    }
                }
            }
        }
        var_28 = ((((min(-var_7, 8184))) ? (max(((-7539594044873531290 ? var_7 : 32749)), ((max(var_2, 11838))))) : (max(var_7, (26 & 37)))));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    arr_32 [i_11] [i_2] [3] = ((((max(2147483630, (arr_24 [i_2] [i_2] [8] [i_2 + 2] [i_2] [i_2])))) ? ((min((!24430), (min(233, var_7))))) : ((max(-14663, 127)))));
                    var_29 = (-16746 / -14890);
                    var_30 = (min(var_30, 63385));
                }
            }
        }
        var_31 = (max(var_31, ((min((((~2751136948) ^ (~var_0))), (((204 ? 28930 : -14886))))))));
    }

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_32 ^= arr_27 [i_12];
        var_33 = var_1;
        var_34 *= var_3;
        arr_36 [i_12] [i_12] = (((((arr_24 [i_12] [i_12] [i_12] [i_12] [i_12] [1]) / 36796)) + (((arr_35 [i_12]) | -60))));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_35 = (max(2147450880, ((max((arr_12 [i_13] [i_13] [i_13]), (arr_12 [i_13] [i_13] [i_13]))))));
        arr_39 [i_13] = -1871222343;
        var_36 = (max(var_36, ((((((arr_12 [i_13] [i_13] [20]) - 97)) != (((arr_29 [i_13] [i_13] [i_13] [i_13]) ? var_10 : var_6)))))));
        arr_40 [i_13] [i_13] = ((-(((27151 <= (!12338))))));
    }
    #pragma endscop
}
