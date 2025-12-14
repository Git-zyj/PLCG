/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (min((arr_1 [i_0] [14]), ((((arr_4 [i_0] [i_0]) || ((min(var_11, (arr_5 [i_1])))))))));
                var_13 = (arr_0 [i_0] [2]);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 = (arr_2 [i_0]);
                    var_15 = ((var_1 ? ((((var_11 && (arr_6 [i_1] [i_1] [i_2] [i_1]))))) : (((max(-1695125306, var_4)) - (-32767 - 1)))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [13] [i_3] = (((((+((var_11 ? (arr_3 [i_0]) : (arr_6 [1] [1] [i_3] [1])))))) - var_11));
                                var_16 = -32761;
                            }
                        }
                    }
                    var_17 *= -1558856011;
                    arr_17 [i_0] = (arr_2 [i_1]);
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_0] = var_3;
                            var_18 = 81;
                            arr_29 [i_0] [10] [i_0] [3] [i_0] |= -15;
                        }
                        arr_30 [10] [i_1] [i_1] [i_1] |= (~-15375);
                        var_19 = (max((~var_10), (max(((min(22242, var_11))), (((arr_27 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]) ? (arr_10 [9] [i_6] [i_7]) : 18446744073709551615))))));
                    }
                    arr_31 [i_0] [i_0] [i_6] [i_6] = 15367;
                    var_20 = var_5;
                    arr_32 [i_1] [i_1] [i_6] = -12132;
                }
            }
        }
    }
    var_21 ^= ((7058033944635600829 - (!var_5)));
    var_22 = ((((~(~202875773))) | -34));
    #pragma endscop
}
