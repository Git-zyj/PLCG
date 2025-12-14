/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((~(((min(16384, (arr_1 [i_0])))))));
        arr_2 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    var_17 = 15;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 1] = (max(15, (((!(4026531840 >= 13188375897057853430))))));
                                var_18 ^= (((arr_14 [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 - 3] [i_1] [i_3 - 2]) ? (arr_13 [i_1] [i_4] [i_3 + 3]) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                                var_19 = (min(var_19, 9));
                                var_20 = (min(var_20, ((min(((((arr_0 [i_3] [i_2]) > ((~(arr_11 [i_4])))))), (arr_7 [i_3 - 2] [i_4] [i_1]))))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] [i_3] = (8367 == -9223372036854775797);
                }
            }
        }
        var_21 |= min(22584, 13188375897057853438);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_22 = 42952;
        var_23 = (min(var_23, (((var_10 + (arr_0 [i_6] [i_6]))))));
        arr_21 [i_6] = ((~(arr_19 [i_6])));
        arr_22 [i_6] = 13188375897057853407;
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_24 *= (((((((((arr_24 [6] [6]) + 42951))) ? (arr_25 [21]) : (((arr_24 [i_7] [12]) ? (arr_24 [i_7] [i_7]) : (arr_23 [i_7])))))) ? (((arr_25 [i_7]) ? 8441819479974742126 : var_6)) : 13));
        var_25 = (arr_23 [i_7]);
    }
    #pragma endscop
}
