/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(12024, 1367760502));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = 235;
                            arr_8 [i_2] = (max((~9170748138644725183), (((15219 ? -3 : 39441)))));
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] = (arr_6 [i_0]);
                        }
                    }
                }
                arr_10 [i_0] [i_1] [i_1] = (max((arr_0 [i_1 + 1]), (max((arr_5 [1] [1]), var_3))));
                var_22 = ((+(min((min((arr_3 [i_0] [i_1 - 3]), (arr_7 [8] [8] [i_1] [i_1]))), var_2))));
            }
        }
    }
    #pragma endscop
}
