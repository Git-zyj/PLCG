/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 5641132994166996735;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = -1176861516;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((-(arr_1 [i_0])));
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_4] = ((255 ? -1176861517 : 1));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] = min((5641132994166996735 > 32701), (~65534));
            }
        }
    }
    #pragma endscop
}
