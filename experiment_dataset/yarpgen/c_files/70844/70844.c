/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 180;
                var_18 |= ((-(((((min(var_2, (arr_0 [i_1])))) < ((var_7 ? (arr_0 [i_1]) : var_1)))))));
                var_19 = (min(((var_6 ^ ((0 ? 5380506461281114513 : (arr_5 [i_1]))))), (arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 += 0;
                                var_21 ^= ((((max(5380506461281114516, (arr_6 [i_0] [i_1] [i_2 + 1])))) && ((min((arr_9 [i_4] [i_3 + 1] [i_3] [i_2 + 2] [16]), ((0 ? (arr_11 [i_0] [i_1] [i_2] [9]) : (arr_11 [i_1] [i_2 + 1] [i_3 + 1] [i_4]))))))));
                                var_22 &= ((~((((min(var_0, (arr_1 [i_1])))) ? (0 | 9178) : (~var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((0 ^ 5380506461281114513) ? var_0 : 937922254));
    var_24 = (min(var_24, ((max((min(var_5, 44653)), var_2)))));
    #pragma endscop
}
