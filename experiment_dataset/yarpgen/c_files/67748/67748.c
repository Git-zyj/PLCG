/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [15] [i_3 - 2] [i_0] [i_0] [i_0] = (max((min((max((arr_4 [i_0] [i_1] [i_2]), (arr_5 [i_3 - 2] [i_0]))), (arr_12 [i_0] [i_1 - 2] [16] [i_4] [i_4 + 1] [i_4 + 1]))), 933084385));
                                var_16 += ((((((arr_5 [i_0] [i_3]) < (min((arr_10 [i_4] [i_3] [i_3] [i_0]), 255))))) < (((arr_6 [i_0 + 1] [i_0 + 1] [i_2 + 2]) ? (arr_6 [1] [i_1 - 2] [i_2 - 1]) : (arr_6 [i_0 - 1] [i_1 - 1] [i_2 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [14] [10] [i_2] [i_2] [i_0] = (arr_5 [i_0] [i_0]);
                                var_17 += 1;
                                var_18 = (min(var_18, (arr_6 [i_1] [i_2] [i_1])));
                                var_19 ^= (((min((((~(-32767 - 1)))), (arr_10 [i_0 - 1] [i_1] [i_6] [i_6]))) < ((((((1 ? -10363 : (arr_16 [i_1] [i_1] [i_5] [i_6])))) ? (~-19805) : ((((-9223372036854775807 - 1) < -7464001796735913658))))))));
                                var_20 = (max((max((arr_5 [i_0 - 1] [i_0]), (arr_19 [i_0] [i_1 + 1] [i_1] [i_2] [i_2] [1] [i_1]))), (arr_19 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
