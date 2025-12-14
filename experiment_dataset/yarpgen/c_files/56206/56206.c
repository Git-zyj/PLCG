/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((((!var_2) ? var_3 : var_2))) : var_0));
    var_11 = (min((var_5 >= var_2), var_6));
    var_12 = (1 ^ 8388576);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((!((((arr_4 [i_0] [i_0] [i_2]) + var_2))))));
                    arr_9 [i_0] [i_1] [12] = ((-((((arr_0 [1]) > ((min((arr_0 [i_0]), (arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((var_7 ? (min((max((arr_8 [i_1] [i_3] [13]), -6907448770557658347)), -var_4)) : (((min(-8388567, var_3)) ^ -8388543))));
                                var_15 = (max(var_15, var_8));
                                var_16 = (min(var_16, 29378));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [11] [5] = (((((((min(5848393083409526556, 135)) < var_8)))) ^ var_6));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] = (min(18446744073709551604, (max(13352628568420094315, ((max(3998900267145862909, 7)))))));
                                var_17 = (var_3 > var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
