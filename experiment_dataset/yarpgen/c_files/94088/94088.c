/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 = (var_4 ? (((203 ? var_11 : 35360))) : (((min((max(var_19, var_14)), var_0)))));
                    arr_8 [14] [1] [i_2] = ((~(((arr_6 [i_0] [i_0] [i_1] [i_2]) & (arr_7 [i_0] [i_0])))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = var_13;
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (max(((max(185, (arr_3 [i_0])))), (((((1 ? var_13 : 10836))) ? (max(0, (arr_1 [15] [15]))) : ((453502894 ? 62457 : 36028797018963967))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = (((((-31 + (min(var_14, var_15))))) ? ((((9469952739092133322 ? (arr_13 [i_0] [i_1] [i_3] [i_0]) : var_15)))) : ((max(39, (arr_11 [1] [i_0] [15] [15]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_22 = (min(var_22, -2639));
                        var_23 = (max(var_23, var_19));
                        var_24 = ((((var_4 ? (arr_12 [i_0]) : var_6)) + (arr_11 [i_3] [i_3] [i_1] [i_0])));

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_25 = (min(var_25, var_10));
                            var_26 = 43679;
                            var_27 ^= (((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? 32767 : var_10)) & (((arr_14 [i_0] [i_4] [6] [i_0]) ? var_7 : var_19))));
                            var_28 = (arr_11 [i_0] [i_3] [i_4] [i_5]);
                            var_29 = (max(var_29, 1));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_30 *= 1;
                            arr_24 [i_0] [i_1] [i_3] [i_4] [8] = var_13;
                            arr_25 [i_6] [i_4] [i_3] [i_0] [i_0] = var_0;
                            var_31 |= (arr_16 [6] [i_4] [i_3] [i_0]);
                        }
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_32 &= ((((-var_16 < (((35353 ? var_6 : 30175)))))));
                        var_33 += ((~(arr_4 [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_34 = (max(((+((max((arr_17 [i_0] [i_0] [i_0]), 1))))), 32767));
                        var_35 *= ((+(min((arr_6 [i_0] [i_1] [i_3] [i_0]), var_15))));
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_36 = (min(var_36, ((min((arr_15 [i_0] [i_1] [i_9]), -52)))));
                        var_37 = 30164;
                        var_38 = (min(var_38, 1));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_34 [2] [2] [i_3] = ((65535 & ((~(arr_28 [i_3] [i_3] [i_1] [i_0])))));
                        var_39 = (min(var_39, 46645));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_40 ^= (arr_28 [i_0] [i_1] [i_11 + 3] [14]);
                    var_41 = (((arr_1 [i_11] [i_0]) && (arr_12 [i_0])));
                }
                var_42 = (min(var_42, ((max((max((arr_16 [i_0] [i_1] [i_1] [i_0]), var_6)), (((1 != ((0 ? 3075209510 : 39665))))))))));
            }
        }
    }
    var_43 = 7463549651338343210;
    #pragma endscop
}
