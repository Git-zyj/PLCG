/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((max(192, (arr_1 [i_0 + 1])))) ? (min((arr_1 [i_0 + 1]), (arr_4 [i_0 + 1]))) : (~1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 = min(0, 82);
                                var_21 = 5931021926683169954;
                            }
                            var_22 *= (arr_6 [i_2]);
                            var_23 = (min(var_23, (max((max((max(33292288, 0)), (arr_8 [i_0] [i_1]))), (((arr_12 [i_0 + 1] [i_1 + 1] [1] [i_1] [i_1]) ? -2777146377017168347 : (arr_9 [i_0] [i_0 - 2] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_24 = (-2147483647 - 1);
                var_25 |= 6;
                var_26 = 15;
            }
        }
    }
    #pragma endscop
}
