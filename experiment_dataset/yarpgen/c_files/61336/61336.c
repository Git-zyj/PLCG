/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min((min(18837, 3816612802)), var_9)), ((min(0, (min((-2147483647 - 1), 32065)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] [i_3] [i_4] = 13;
                                var_11 = (min(var_11, ((min(((min(-32072, 58953))), (-2147483647 - 1))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_19 [i_7 + 4] [i_6] [i_5] [i_0] [i_0] |= (min((min(-32093, -23437)), (min((-32767 - 1), 64))));
                                var_12 *= (min((min(243, 663007858)), 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_7, ((min(2, 1)))));
    #pragma endscop
}
