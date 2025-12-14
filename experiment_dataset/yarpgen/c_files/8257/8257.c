/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (15415312568256722369 | (((var_3 ? (arr_4 [8] [i_1]) : (arr_2 [i_0] [i_0])))));
                var_15 += (((((~(min(15415312568256722371, var_12))))) ? (((!((max((arr_1 [i_1]), -9110439941407138620)))))) : (arr_2 [0] [i_0])));
                arr_6 [i_0] [i_1] [i_1] = ((~((max(65514, 242)))));
                arr_7 [i_0] [i_1] &= 574011183;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1] [i_4] = (min(((max(3, -var_10))), ((16401796996303280536 ? 18446744073709551615 : (((arr_9 [i_0]) ? -3367 : 2351070163276098264))))));
                                var_16 = (min(496, 2));
                                var_17 = (max(var_17, (~var_4)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
