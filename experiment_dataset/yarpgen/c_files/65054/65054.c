/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [i_0]) + ((((arr_2 [i_0 - 3]) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 3]))))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = (~var_12);
                        var_16 = var_7;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] = -47;
                            var_17 = (max(var_17, -var_1));
                            arr_17 [i_0] [i_0] = -49;
                            var_18 = (~var_4);
                        }
                        for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_19 = 1;
                            var_20 = -var_4;
                            var_21 &= (((((0 ? (arr_0 [i_1]) : 1))) ? var_5 : (arr_20 [i_0] [i_0 + 1] [i_1] [i_0] [i_4] [i_6])));
                        }
                        for (int i_7 = 4; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = (((((arr_7 [i_0 - 3] [i_7]) != (arr_7 [i_1] [i_1])))) > (((var_12 >= (arr_13 [i_7] [i_4] [i_2] [i_1] [i_0 - 2])))));
                            var_22 = (min(var_22, 43));
                        }
                        var_23 ^= ((-((var_5 ? 43 : (arr_10 [i_0] [i_1] [i_0] [i_4])))));
                        var_24 = 0;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_25 -= (((((((34 <= (arr_1 [i_8]))))) | ((126 ^ (arr_0 [i_0 - 3]))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            var_26 = (((((arr_21 [i_0] [i_1] [i_1] [i_0] [i_1] [i_8]) ? (arr_28 [i_8] [i_8]) : var_7)) * (arr_28 [i_0 + 1] [i_0 - 3])));
                            arr_31 [i_9] [i_0] [i_0] [i_0] [i_0] = ((-var_5 == (arr_14 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0])));
                            var_27 &= 1;
                        }
                        arr_32 [i_8] [i_0] [i_0] [i_0] = (max(((var_7 ? ((((arr_2 [i_0]) != (arr_3 [i_0] [i_0] [i_0])))) : ((~(arr_23 [i_0] [i_1] [i_2] [i_8] [i_2] [i_2]))))), (~-43)));
                    }
                    var_28 = (min(var_28, ((((((-var_9 - ((1 ? 43 : 498473366))))) ? (((max(1945732359, 21501)) >> (43 - 42))) : (((8191 ? var_3 : var_3))))))));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_29 -= -43;
                    var_30 = (max((!-2760440791), ((var_5 ? var_3 : (arr_5 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                }
                var_31 = -23;
                var_32 = (((((((var_2 ^ (-127 - 1))) + 2147483647)) << ((((max(43, var_5))) - 57155)))) | (~-43));
            }
        }
    }
    #pragma endscop
}
