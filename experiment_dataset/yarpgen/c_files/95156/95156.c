/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] |= (~544562734);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_4] [13] [i_0] [i_4] = ((-3750404553 >> (((arr_10 [i_0] [i_1] [i_2] [i_3 - 1] [i_2]) - 8497711198181567970))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_1] = (arr_11 [i_0] [i_1]);
                                arr_16 [i_4] [i_4] [i_3 + 1] [20] [i_0] [i_0] [i_0] = 20311;
                            }
                        }
                    }
                    arr_17 [5] [4] [i_2] [i_2] = (min((!234881024), ((-(arr_10 [20] [i_1] [i_1] [i_2] [i_2])))));
                    arr_18 [i_0] [i_0] [i_0] |= 8715784911163348190;
                    var_17 += (((!var_5) != (544562745 && var_0)));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_18 += var_11;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [i_1] [i_6] [i_5] [i_1] [i_0] [i_0] = ((var_16 ? var_14 : (max((~1014910803083243299), (arr_11 [i_0] [i_7])))));
                                var_19 += ((var_15 & (arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])));
                                var_20 += 3750404560;
                            }
                        }
                    }
                    arr_28 [3] [i_1] [i_1] = -544562745;
                    var_21 += var_11;
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    var_22 += ((~(arr_25 [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8] [i_8])));
                    var_23 = (~2789065711573349250);
                }
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    arr_35 [i_9] [i_1] = -7859769617859866083;
                    var_24 = ((-23067 ? (arr_5 [i_9 - 2] [i_9 - 2] [i_9 - 2]) : ((~(arr_34 [21] [i_1] [i_1])))));
                    var_25 += (arr_19 [i_0] [i_1] [i_1] [i_9]);
                    var_26 ^= (arr_30 [i_9] [i_1] [i_0]);
                }
                var_27 = var_10;
                var_28 -= arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1];
            }
        }
    }
    var_29 = ((~(min(-544562751, (var_10 | var_5)))));
    #pragma endscop
}
