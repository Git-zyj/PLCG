/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((92 ? 40079 : 2139095040));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= (max(1338776808, (75 || var_12)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((((arr_10 [i_3 - 1] [i_4] [i_3 - 1] [i_4]) ^ var_0)))));
                            var_20 = ((-(arr_14 [4] [i_1] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_21 |= (((arr_16 [i_0] [i_0 + 3] [i_1 + 2] [i_3 + 2] [3] [i_3]) - (arr_1 [i_5])));
                            var_22 = (arr_7 [i_0] [i_1 + 2]);
                            var_23 -= (~4075456938);
                            var_24 = (min(var_24, ((((arr_2 [i_5]) <= (arr_2 [i_5]))))));
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            var_25 *= 25462;
                            arr_21 [2] [1] [i_2] [1] [i_0] = var_7;
                            var_26 -= ((var_12 | (arr_14 [9] [4] [i_1 - 1])));
                            var_27 = ((25454 ? ((((arr_1 [i_0]) <= (arr_2 [i_0])))) : -0));
                        }
                        var_28 = 61;

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            var_29 = (((arr_6 [i_0]) * -var_6));
                            arr_24 [i_0] [i_1] [10] [i_7] [i_7] &= (((arr_16 [i_3] [i_3] [i_7 + 2] [i_7] [i_7] [i_7]) ? (arr_15 [i_7] [i_7 + 1]) : -983767423));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
