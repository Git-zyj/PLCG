/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -28115;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [4] [i_1] [17] [i_1] = (((min((min((arr_4 [8] [i_1]), (arr_4 [i_1] [6]))), (arr_3 [i_0] [2] [i_2]))) > 3410480255));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = 127;
                                var_14 = (3 && (arr_8 [i_3] [i_3 + 2] [i_3 + 2] [15]));
                                arr_14 [i_3] [i_2] [i_3] = (arr_11 [4] [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= (((min(((max(3410480257, 4047411012))), (max(var_8, 9223371968135299072))))) ? var_4 : (var_1 <= var_7));
    #pragma endscop
}
