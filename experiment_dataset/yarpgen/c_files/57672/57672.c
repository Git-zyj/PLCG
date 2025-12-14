/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (~-1340188527);
                var_15 = ((((!(arr_1 [i_1] [i_1 - 1]))) ? ((((((arr_6 [i_0] [i_0] [i_1]) || (arr_2 [i_1] [i_1]))) && (arr_4 [i_1] [i_1 + 1])))) : (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (((((-962938906 - 2712918364) + -9031)) >= ((((!(((var_8 ? (arr_4 [i_1] [i_2]) : 240)))))))));
                                arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = (~2683693637779509372);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5] [i_1] [i_6] [i_7] = (min(var_5, ((max(var_3, (min(239, 246)))))));
                                arr_24 [i_1] [i_1] [i_1] [i_7] [i_7] = (arr_9 [i_1] [i_6] [i_5] [i_1] [i_1]);
                                arr_25 [i_0] [i_6] [i_5] [i_1] [i_0] [i_0] &= (arr_11 [i_7] [i_6] [i_5] [i_5] [i_1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, -1));
    var_17 = var_8;
    #pragma endscop
}
