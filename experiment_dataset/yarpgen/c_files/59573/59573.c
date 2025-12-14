/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_10 = ((4294967294 ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (((arr_1 [i_0]) ? 2048 : (arr_1 [i_0])))));
        var_11 = ((-((((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((((min((arr_5 [i_1]), (arr_5 [i_1])))) - (arr_5 [i_1]))))));
        var_13 = ((-((((arr_5 [i_1]) && (arr_5 [i_1]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_14 = (((((-2048 ? (1763126888 == 0) : 4294967291))) == (arr_8 [i_2])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_15 ^= (max((((arr_14 [i_5] [i_4] [i_3]) ? 4294967294 : ((var_0 ? var_1 : var_3)))), ((max((((arr_6 [24] [i_5]) ? (arr_13 [i_5] [i_4] [i_2]) : 1)), (((~(arr_9 [i_4] [i_4])))))))));
                            var_16 = 47;
                            var_17 = (max(var_17, var_7));
                            var_18 = (max((arr_13 [i_3] [6] [i_5]), -2046));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_19 = (min(var_19, 2048));
                            arr_22 [i_2] [i_2] [i_2] [i_6] = (var_9 >> ((((var_3 ? var_2 : (((var_6 ? (arr_16 [18] [i_2] [i_2]) : 22219))))) - 17450773612826501014)));
                            var_20 = ((((((4294967294 << (2048 - 2039))) == (var_6 >= var_1))) ? var_7 : (((((-(arr_16 [i_3] [i_3] [i_6]))) != -32761)))));

                            for (int i_8 = 1; i_8 < 24;i_8 += 1)
                            {
                                arr_27 [i_8] [i_6] [i_2] = 609908318;
                                var_21 = 22;
                                var_22 = (min(var_22, ((min(((((max(var_4, (-127 - 1)))) ? (min(-2053, var_5)) : (4294967270 & 16))), var_0)))));
                                var_23 = ((((max((arr_20 [i_2] [i_6] [i_6] [i_8]), var_3))) ? 22 : -1));
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                arr_30 [i_6] [4] [i_6] [i_3] [i_6] = (!33319);
                                arr_31 [i_6] [i_7] [i_6] [i_2] [i_6] = -var_6;
                                arr_32 [i_6] = ((((((~2143289344) || (((7 % (arr_14 [i_3] [3] [i_3]))))))) >> (((max(((max(-2058, 243))), ((3526834198 ? var_4 : var_2)))) - 18446744073709551485))));
                            }
                            var_24 = ((((max((min((arr_17 [i_6] [i_6] [i_7]), 1488)), (arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6] [5])))) ? (max(var_6, (((-638223239404506354 + 9223372036854775807) << (var_2 - 17450773612826501014))))) : ((((!((((arr_16 [i_2] [i_6] [i_2]) >> (var_9 - 6767030636022584075))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_25 = (max(10591, ((((var_1 ? 7574 : var_8)) % ((2711794297 * (arr_19 [i_2] [i_3] [i_10] [i_3])))))));
                            var_26 = (max((max(var_9, (arr_8 [i_3 - 1]))), (~3916674803852953578)));

                            for (int i_12 = 1; i_12 < 24;i_12 += 1)
                            {
                                var_27 = (((((-(arr_18 [i_12] [6] [i_2] [i_2])))) ? ((~(min(var_2, (arr_14 [i_12] [0] [i_2]))))) : (arr_10 [i_2] [11])));
                                var_28 = (max((max(((max(2053, var_7))), var_5)), ((min((((var_6 ^ (arr_9 [17] [i_12])))), (~4294967291))))));
                                arr_42 [i_12] [i_10] [i_12] = ((((((max(-5206, 249))) ? (arr_13 [16] [16] [16]) : (max((arr_6 [i_2] [i_2]), var_3)))) - (max((var_2 / var_8), ((56869 ? var_9 : 32760))))));
                                var_29 &= ((var_4 ? (arr_33 [0]) : (max(641936918161696311, (arr_24 [i_2] [i_3 + 2] [i_3 + 2] [8] [i_3 + 2] [i_10])))));
                            }
                            var_30 = ((min((max(126, var_5)), var_2)));
                        }
                    }
                }
                arr_43 [i_2] [i_2] [i_3 - 1] = min(((-(max(var_5, (arr_39 [i_3] [i_3 + 1] [i_2] [i_3] [i_2]))))), (-127 - 1));
            }
        }
    }
    #pragma endscop
}
