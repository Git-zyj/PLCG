/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 += (((arr_1 [i_1]) ? ((min((arr_1 [i_0 + 1]), (arr_5 [i_0 - 3] [i_0 - 3] [18])))) : (((arr_5 [i_1] [i_0 + 1] [i_0]) ? (arr_0 [i_1] [i_0 + 1]) : (arr_5 [i_0] [i_1] [i_1])))));
                arr_6 [i_0] [2] &= var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_20 = (min(var_20, var_17));
                arr_13 [i_2 - 2] [7] = var_3;
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (((arr_7 [i_2 - 2]) ? (((arr_7 [i_2 - 2]) ? (arr_7 [i_2 - 2]) : var_5)) : (11401 - 8192)));
                                arr_21 [11] [17] [2] [i_6] = (!var_13);
                                arr_22 [i_2] [i_2] [1] [i_2] [1] [1] = ((~((var_5 ? (min(1, 9223372036854775807)) : (arr_8 [i_2])))));
                                arr_23 [i_2] [2] [i_4] [i_6] [i_5] = (((max(4294967295, var_1))) && ((((127 - 4294967285) ? (arr_16 [i_2] [5]) : 123))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_22, (var_12 || var_0)));
                                arr_31 [i_2] [i_3] = (arr_19 [i_2] [i_3] [i_7] [4] [i_8] [4]);
                                arr_32 [i_9] [i_8] [i_7] [3] [i_2] &= (max(4294967295, ((-var_4 ? (min(496, var_7)) : ((max(var_13, var_2)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
