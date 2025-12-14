/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_7 ? var_14 : var_2)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (min(var_7, (((var_9 ? 7601266119039115697 : var_11)))));
                    var_16 = (max(54951, (((((var_9 ? 2147483647 : var_12))) ? ((max(var_8, -2147483641))) : var_7))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 += var_14;
                        arr_13 [i_0] [i_0] [i_1] [0] = var_0;
                        var_18 = (max((min(var_10, ((min(0, 54950))))), var_11));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [11] = (((max(var_3, var_7))));

                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_2] [i_1] [i_1] = (var_14 != var_11);
                            var_19 = ((var_3 - ((((min(var_2, var_4))) ? -773950885 : var_13))));
                            arr_22 [i_1] [i_1] = (max((((var_7 || ((min(54938, var_9)))))), ((var_10 ? (((var_0 << (251 - 235)))) : (max(var_3, 3570129814852602511))))));
                            arr_23 [i_1 + 1] [i_0] [i_1 + 1] [i_0] |= (((max(var_1, var_9)) / var_10));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_26 [i_1] [i_1] [i_1] = 14876614258856949104;
                        var_20 = (min(var_20, var_7));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_21 = ((3570129814852602515 >> (var_6 - 36985)));
                        var_22 = var_14;
                    }
                }
            }
        }
        var_23 = (min((min(1753925512824513955, var_12)), ((max((min(var_13, var_14)), var_12)))));
        arr_29 [i_0] = 1753925512824513955;
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        arr_32 [i_8] = 1;
        arr_33 [i_8] [i_8] = var_13;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_45 [i_9] [i_10] [i_10] = (((((min(16692818560885037660, var_14)))) ? ((var_5 ? var_13 : -3319)) : (((52645 <= var_1) & 76))));
                        var_24 = 112;
                        var_25 = ((((min(((max(12867, 112))), ((var_9 ? var_10 : var_6))))) ? (min(var_14, (var_3 ^ var_0))) : (min(var_0, var_10))));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_26 = (((var_13 ? var_1 : -104)));
                            var_27 = ((76 | ((var_3 ? var_7 : var_7))));
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_50 [i_14] [i_12] [12] [i_9] [i_9] = (min((max(1, var_10)), 1620339493));
                            var_28 *= var_10;
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_53 [i_9] [i_9] [i_10] [i_10] [i_11] [i_12] [14] = ((max((max(var_5, var_9)), ((min(var_11, 29718))))));
                            var_29 = (min(((var_8 ? (max(65320, var_10)) : (min(var_1, var_12)))), ((max((max(var_0, var_2)), ((var_1 ? 3230554534 : 805306368)))))));
                            var_30 = ((var_11 == (max(1229587506, 154))));
                            var_31 = (min(var_31, (26027609 != var_8)));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_32 *= (min(var_4, var_14));
                            var_33 = 6382636737563233755;
                        }
                    }
                }
            }
        }
        arr_56 [i_9] [i_9] = (max((((max(var_3, 52668)) ^ ((var_9 ? var_1 : 2722017004)))), ((max(-1016404151, var_13)))));
        var_34 = var_0;
        arr_57 [i_9] = (max(-136, var_4));
        var_35 = (min((max((var_11 + var_3), var_9)), var_11));
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        var_36 -= (max(((max(((1620339493 >> (var_7 - 3376237452))), 5178033847324526982))), var_3));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 21;i_20 += 1)
                {
                    {
                        arr_68 [i_18] [i_18] [i_18] [i_19] [i_18] = ((var_14 <= (max((max(83, 134152192)), var_6))));
                        arr_69 [i_18] [i_18] [i_19] [i_20] [i_18] = (min((min(var_12, ((-5178033847324526988 ? var_1 : var_3)))), var_11));
                    }
                }
            }
        }
        var_37 = var_11;
    }
    var_38 = (((var_8 ? (var_6 & var_9) : 24992)));
    #pragma endscop
}
