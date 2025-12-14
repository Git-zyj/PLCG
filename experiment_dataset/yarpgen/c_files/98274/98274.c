/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((3114 ? -9180 : 1));
                var_13 = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_14 = (!3023619483);
                    var_15 &= ((0 + (((((0 < (arr_7 [10]))) && (((~(arr_9 [i_2 - 3] [i_2 - 3])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 = ((((max(var_7, (arr_9 [i_3 + 1] [i_3 + 1])))) - (arr_10 [i_4] [i_2 - 1] [i_6 + 1] [i_2])));
                                arr_18 [i_2 - 2] [i_2] = 1;
                                var_17 ^= var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
