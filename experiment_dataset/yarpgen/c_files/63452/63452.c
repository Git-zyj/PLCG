/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = ((~(((arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0]) ? (arr_4 [i_0 + 3] [6] [i_0 + 3] [i_0]) : (arr_4 [i_0 - 2] [7] [i_0] [i_0])))));
                    var_15 = (-(min((arr_2 [i_2] [i_2 - 3] [4]), (arr_2 [i_2] [i_2 - 3] [i_2]))));
                    var_16 = (((((4756231839721889752 ? 25821 : 2233785415175766016))) ? -var_1 : ((((((-(arr_5 [i_0] [i_0] [i_0]))) != (min(-5578616593326278410, var_11))))))));
                    var_17 = (min(var_17, (((var_5 >> ((((var_12 ? (arr_1 [i_1] [i_1]) : ((var_12 ? (arr_5 [3] [3] [i_0 + 3]) : (arr_2 [i_0] [i_1] [i_2]))))) - 18446744073702556621)))))));
                }
            }
        }
    }
    var_18 = (((max((max(var_7, var_9)), var_1))) ? ((18116328782135871050 ? var_8 : (max(25821, -5578616593326278410)))) : (((var_2 ? 25821 : (!var_10)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_5] [i_6] = ((~(~-2233785415175766017)));
                                arr_23 [i_5] [i_5] = ((max((max(var_5, (arr_21 [i_5]))), var_10)));
                                var_19 = (arr_15 [0] [i_5]);
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((var_12 ? (min((min((arr_13 [i_4] [6] [i_3] [i_3]), 283871901)), (((86 ? var_10 : var_11))))) : ((((((-181151486 + 2147483647) << (((-5578616593326278410 + 5578616593326278427) - 17)))) | (~var_12)))))))));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
