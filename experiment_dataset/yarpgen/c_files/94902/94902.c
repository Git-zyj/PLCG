/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min(var_8, ((-(max(var_2, 14236047660465273310))))));
    var_15 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((-(arr_2 [i_1])))) ? (arr_1 [i_0]) : ((-(arr_1 [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_2] [i_1] [i_2] [i_2] [14] = max(var_2, -var_8);
                            arr_10 [i_1] [17] [i_1] = ((-(arr_5 [12] [12] [i_2])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_16 = ((!(((-(arr_17 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_6]))))));
                    var_17 = ((var_0 ? 112 : (arr_13 [i_5 - 3] [i_5 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
