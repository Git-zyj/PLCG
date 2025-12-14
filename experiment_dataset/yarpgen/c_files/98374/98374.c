/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((52 ? 0 : 729479208354886857));
                arr_5 [i_1] &= ((min(17717264865354664759, 17717264865354664759)) << (660011305 - 660011266));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 &= (-219213338 + 1);
                                arr_21 [i_4 + 2] [i_6] = (1396378879155045279 | 729479208354886857);
                            }
                        }
                    }
                }
                arr_22 [8] [i_2] = var_18;
            }
        }
    }
    #pragma endscop
}
