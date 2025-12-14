/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 -= ((var_11 + (-926520531 < -926520531)));
                            var_22 = ((6513 && (arr_0 [i_2] [i_3])));
                        }
                    }
                }
                arr_9 [i_0] [i_1] = ((var_4 | (+-6514)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] = (min((arr_7 [i_1] [i_4] [i_4] [i_4 - 1] [i_4 + 1]), ((-(arr_7 [i_1] [2] [i_1] [i_4 + 1] [i_4 + 1])))));
                            var_23 = var_5;
                        }
                    }
                }
                arr_16 [i_1] [i_0] = var_11;
            }
        }
    }
    #pragma endscop
}
