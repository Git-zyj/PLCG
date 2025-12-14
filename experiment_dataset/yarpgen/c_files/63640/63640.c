/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((var_2 ? (max((min(1356319902926779769, 0)), -var_3)) : ((var_8 ? ((var_2 ? var_2 : var_6)) : (max(var_1, var_2))))));
    var_13 -= 4533;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 += ((((((var_8 % (arr_5 [i_2] [i_0]))) ^ (arr_5 [i_0 + 1] [i_2 + 1]))) * ((max((arr_3 [i_1] [i_1]), (~6))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 -= (4390 || -1356319902926779769);
                                var_16 ^= ((-0 ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_9));
                                var_18 = ((-1227395077 ? ((max((65535 != var_4), (arr_5 [i_0 - 1] [i_2 - 1])))) : 15));
                                var_19 = ((!((((~3761758287086068798) ? (536869888 != 15) : 1)))));
                            }
                        }
                    }
                    var_20 = ((+(((arr_8 [i_0 + 3] [i_2] [i_2 + 1] [i_0 + 3]) ? (arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1]) : (arr_15 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                    var_21 = (max(((-1227395077 ? -43 : 44958)), ((max((arr_17 [i_0] [i_0 - 4] [i_0 - 3] [i_0 - 4] [i_0]), 44958)))));
                }
            }
        }
    }
    #pragma endscop
}
